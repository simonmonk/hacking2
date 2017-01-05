# For active-low relays
# pin mode input - relay off
# pin mode output low - relay on

import RPi.GPIO as GPIO
import time

# Configure the Pi to use the BCM (Broadcom) pin names, rather than the pin positions
GPIO.setmode(GPIO.BCM)

led_pin = 18

def relay_on():
    GPIO.setup(led_pin, GPIO.OUT)
    GPIO.output(led_pin, False)
    
def relay_off():
    GPIO.setup(led_pin, GPIO.IN)

try:         
    while True:
        relay_on()
        time.sleep(0.5)             # delay 0.5 seconds
        relay_off()
        time.sleep(0.5)             # delay 0.5 seconds
        
finally:  
    print("Cleaning up")
    GPIO.cleanup()