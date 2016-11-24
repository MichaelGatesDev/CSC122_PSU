# ArduinoTrafficLight
Traffic light using an Arduino Uno

# Parts used:
* 1x Power Cable
* 1x Arduino Uno
* 1x Breadboard (for wiring)
* 4x Wires (3 for LEDs, 1 for ground)
* 3x LEDs (I used 2 red and 1 yellow, but a green one would be nice too)
* 3x 330Ω Resistors

# Description
Blinks a series of LEDs like a traffic light. It begins with the 'red' LED, which it will set to HIGH for a set amount of time, then it will move to the 'yellow' LED which will be set to high for a set amount of time and the previous light is set to low, and then finally the 'red' LED which will be set to high for a set amount of time and the previous light will be set to low. 

[![Here's an example video (sped-up)](http://i.imgur.com/2QQ0gmK.jpg)](https://www.youtube.com/watch?v=U2K5zMubzlU "Arduino Traffic Light using LEDs")
