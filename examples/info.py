import sys

from epsolar_tracer.client import EPsolarTracerClient

default_port = '/dev/ttyXRUSB0'

port = input('Enter serial port to use [{}]:'.format(default_port)) or default_port

client = EPsolarTracerClient(port=port)

if client.connect():
    print('Connected successfully to {}'.format(port))
else:
    print('Connection failed to {}'.format(port))
    sys.exit(1)

response = client.read_device_info()
print("Manufacturer: {}".format(repr(response.information[0])))
print("Model: {}".format(repr(response.information[1])))
print("Version: {}".format(repr(response.information[2])))

response = client.read_input("Battery SOC")
print(str(response))
response = client.read_input("Charging equipment output current")

print(str(response))

# response = client.write_output("Manual control the load", 0)

# print(str(response))

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
