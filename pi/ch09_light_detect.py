import RPi.GPIO as GPIO

# Configure the Pi to use the BCM (Broadcom) pin names, rather than the pin positions
GPIO.setmode(GPIO.BCM)
sensor_pin = 18
GPIO.setup(sensor_pin, GPIO.IN)

was_light = False

try:         
    while True:
        is_light = GPIO.input(sensor_pin)
        if (is_light == True) and (was_light == False):
            print("It got light")
            was_light = True
        elif (is_light == False) and (was_light == True):
            print("It went dark")
            was_light = False
        
finally:  
    print("Cleaning up")
    GPIO.cleanup()