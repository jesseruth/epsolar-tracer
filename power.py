#!/usr/bin/python

from datetime import datetime
from pyepsolartracer.client import EPsolarTracerClient
from pyepsolartracer.registers import registers,coils
from influxdb import InfluxDBClient
import time

influx_client = InfluxDBClient(database='solar')


import logging
logging.basicConfig()
log = logging.getLogger()
log.setLevel(logging.INFO)

serialclient = None
client = EPsolarTracerClient(serialclient = serialclient)
client.connect()


def logData():

    house_voltage = client.read_input("Charging equipment output voltage")
    
    # print(house_voltage)
    
    pv_array_voltage = client.read_input("Charging equipment input voltage")
    
    # print(pv_array_voltage)
    # print(pv_array_voltage.__float__())
    
    request_body = {
        "measurement": "house_voltage",
        "fields": {}
    }

    if pv_array_voltage.value is not None:
        request_body["fields"]["pv_array_voltage"] = pv_array_voltage.__float__()

    pv_array_current = client.read_input("Charging equipment input current")
    # print(pv_array_current)
    # print(pv_array_current.__float__())

    if pv_array_current.value is not None:
        request_body["fields"]["pv_array_current"] = pv_array_current.__float__()

    pv_array_power = client.read_input("Charging equipment input power")
    
    # print(pv_array_power)
    
    if pv_array_power.value is not None:
        request_body["fields"]["pv_array_power"] = pv_array_power.__float__()

    if house_voltage.value is not None:
        request_body["fields"]["house_voltage"] = house_voltage.__float__()

    json_body = [request_body]
    
    print(request_body)
    influx_client.write_points(json_body)



def main():
    print "Solar Charging Log System"
    while True:
        logData()
        time.sleep(20)
    client.close()

if __name__ == '__main__':
    main()

    
