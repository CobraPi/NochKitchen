from Led import Led
import time

if __name__ == "__main__":

    print("Welcome to Notch Kitchen")
    led = Led()

    while True:
        
        led.white()
        print(led.get_led_vals())
        time.sleep(1)
        led.blue()
        print(led.get_led_vals())
