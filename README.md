# Smart-Light-System
Arduino Uno Board + PIR Sensor + Relay Module
This project was created along with Mr Vedant Lodha and Mr Divyansh Gupta for my lab end semester project for Wireless Sensor lab.

INTRODUCTION:
A Smart Lighting System is a simple project, where if the motion of a human being coming inside
the room is sensed by the motion sensor it switches on the bulb. If the motion of human being
moving outside the room is detected by the motion sensor; after a few seconds (10 seconds) of
inactivity, the sensor automatically sends the signal to switch off the bulb leading the bulb to get
switched off.
This helps in conservation of electricity and provides a step towards sustainable development. As
we humans tend to forget to switch off the light, while going outside our homes or place of work,
this method helps to rectify our mistakes. It also decreases the amount of electricity bill paid by a
household or place of work.
It can also be used to secure rooms where the sensor can sense the motion of the trespasser and
switch on the light.

PROBLEM DEFINITION:
To be able to control the ON/OFF state of a CFL bulb using PIR motion sensor HC-SR501 and Relay Module.

OBJECTIVE:
The objective of this project was to make use of a sensor, namely HC-SR501 PIR Motion
Sensor to create a smart lighting circuit, which can be used to control the ON/OFF state of the
bulb, thereby reducing energy consumption.

SCOPE:
A simple Smart Lighting System Circuit is implemented in this project with the help
of a PIR sensor and Arduino UNO. 
PIR sensor senses the motion and switches the bulb ON/OFF according to the
situation. 
Instead of using an AC load, a DC load can be used nullifying the use of relay module. 
DC powered LED lights can be used in this case or we can diversify our application to
charging batteries of cell phones based on the motion sensor. 

METHODOLGY:
The design of the Smart Lighting Circuit is simple.
The first connection is between the PIR sensor and the Arduino UNO board. The VCC of the
sensor is connected to 5V, the OUT pin is connected to Pin 2 and ground is connected to the
GND of the Arduino board.
The second connection is between the Relay Module and the Arduino board. The VCC of the
relay module is connected to 3.3V, IN1 pin is connected to Pin 8 and ground of the module is
connected to GND of the Arduino board.
On the other side of the relay module, we need to connect the light bulb. It is done by
connecting a power plug with the light bulb and then connecting this power plug to the
extension and relay module.
We connect one wire from the power plug to one side of the bulb and then connect the other
side of the power plug to common (C) of the relay module. After that a connection from
normally open (NO) of the relay module to the other side of the bulb is made.


IMPLEMENTATION:
The HC-SR01 actually works by detecting the infrared rays. Whenever the human body comes
near motion sensor so as the human body emits infrared rays, the motion sensor detects this
infrared rays and it gives it a HIGH signal though the output pin.
This HIGH signal is then read by the Arduino. So if Arduino reads a HIGH signal, it will give a
HIGH signal to the relay module which means that the relay will turn on and as a result the light
bulb will glow. Similarly if the Arduino reads a LOW signal, it will make the relay pin LOW and
as a result the light bulb will switch off.
Hence, we are able to control the ON/OFF state of the bulb according to human motion.


RESULT ANALYSIS:
With successful implementation of the project, the ON/OFF state of the bulb could be
controlled by motion of human beings. Such a project could be useful for conservation of
electricity as well as for security purposes.
