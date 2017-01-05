import RPi.GPIO as GPIO
import time

# Configure the Pi to use the BCM (Broadcom) pin names, rather than the pin positions
GPIO.setmode(GPIO.BCM)

relay_pin = 18

try:         
    while True:
        # relay on
        GPIO.setup(relay_pin, GPIO.OUT)
        GPIO.output(relay_pin, False) 
        time.sleep(2)             
        # relay off
        GPIO.setup(relay_pin, GPIO.IN)
        time.sleep(2)           
        
finally:  
    print("Cleaning up")
    GPIO.cleanup()