# Python code to test Basic AT Commands on WizFi360

import serial, time
import sys

wizfi360 = serial.Serial("COM8",  115200, timeout=0)



#Functions
def sendCMD_waitResp(cmd):
    print("CMD: " + cmd)
    wizfi360.write(cmd.encode())
    waitResp()
    print()
    
def waitResp():
    resp = b""
    time.sleep(0.1)
    if wizfi360.in_waiting:
        resp = b"".join([resp, wizfi360.read(1024)])
    if(resp == b''):
        sys.exit("Error!  :  WizFi360 is not present or not responding ")
    else:
        print(resp.decode('utf8'))
    

#AT command Test
sendCMD_waitResp("AT\r\n")     #AT -  Tests AT Startup
sendCMD_waitResp("AT+GMR\r\n") #AT+GMR: Checks Version Information
time.sleep(1)
print("Grove_WizFi360 Works   yay!")


