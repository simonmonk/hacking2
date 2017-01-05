import RPi.GPIO as GPIO
import time

# Configure the Pi to use the BCM (Broadcom) pin names, rather than the pin positions
GPIO.setmode(GPIO.BCM)

relay_pin = 18
GPIO.setup(relay_pin, GPIO.OUT)

try:         
    while True:
        GPIO.output(relay_pin, True) 
        time.sleep(2)             
        GPIO.output(relay_pin, False) 
        time.sleep(2)           
        
finally:  
    print("Cleaning up")
    GPIO.cleanup()