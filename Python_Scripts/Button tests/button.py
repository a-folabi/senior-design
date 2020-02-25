from gpiozero import Button
from time import sleep
button1 = Button(3)
button2 = Button(2)
while True:
    if button1.is_pressed:
        print("Power up")
    if button2.is_pressed:
        print("Power down")
    sleep(0.1)