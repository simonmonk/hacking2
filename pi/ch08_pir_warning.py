import RPi.GPIO as GPIO
import datetime, time

# Configure the Pi to use the BCM (Broadcom) pin names, rather than the pin positions
GPIO.setmode(GPIO.BCM)
pir_pin = 18
GPIO.setup(pir_pin, GPIO.IN)

try:         
    while True:
        if GPIO.input(pir_pin):
            print("Movement Detected " + str(datetime.datetime.now()))
            time.sleep(1)
        
finally:  
    print("Cleaning up")
    GPIO.cleanup()