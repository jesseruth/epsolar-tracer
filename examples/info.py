from epsolar_tracer.client import EPsolarTracerClient
from epsolar_tracer.registers import registers, coils
# from test.testdata import ModbusMockClient as ModbusClient
from pymodbus.client.sync import ModbusSerialClient as ModbusClient

# configure the client logging
import logging

logging.basicConfig()
log = logging.getLogger()
log.setLevel(logging.INFO)

serialclient = ModbusClient(method='rtu', port='/dev/ttyUSB0', baudrate=115200)

#serialclient = ModbusClient()

# serialclient = None

client = EPsolarTracerClient(serialclient=serialclient)
client.connect()

response = client.read_device_info()
print("Manufacturer: {}".format(repr(response.information[0])))
print("Model: {}".format(repr(response.information[1])))
print("Version: {}".format(repr(response.information[2])))

response = client.read_input("Battery SOC")
print(str(response))
response = client.read_input("Charging equipment output current")

print(str(response))


#response = client.write_output("Manual control the load", 0)

#print(str(response))

"""
for reg in registers:
    # print
    # print reg
    value = client.read_input(reg.name)
    print(value)
    # if value.value is not None:
    #    print client.write_output(reg.name,value.value)

for reg in coils:
    # print
    # print reg
    value = client.read_input(reg.name)
    print(value)
    # print client.write_output(reg.name,value.value)
"""
client.close()
