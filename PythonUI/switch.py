import serial
import time

class SerialMessages:

    ping = b'\x00'
    echo = b'\x01'
    incoming_switch_state = b'\x05'
    incoming_led_state = b'\x06'






if __name__ == "__main__":
    port = "/dev/cu.usbmodem14401"
    baud = 115200
    serial = serial.Serial(port, baud, timeout=0.1)
    time.sleep(0.5)
    serial.write(SerialMessages.ping)
    time.sleep(1)
    while True:
        code = serial.read(1)
        if code == SerialMessages.incoming_switch_state:
            state = serial.read(1)
            print("switch state", state)
        #print("test")
