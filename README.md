# ATmega328p-VGA
This project shows the the use of the "breadboard uno" pushing out a VGA connection

Below you can see the schematics for for ATmega328p breadboard along with the VGA schematics. 


# Breadboard 
![breadboard chematics](https://user-images.githubusercontent.com/118654680/213867208-94886ece-999f-4019-bb38-40d85b77fbd2.PNG)

The schematics here show how we can create a barebones Arduino Uno on a breadboard. We will be using this in our project.

# VGA
![vga schematics](https://user-images.githubusercontent.com/118654680/213867251-b6814b13-22f2-42fd-98b5-5c088a1533e8.PNG)

These are the schematics for our pin output to VGA using a normal Arduino Uno. 

# ATmega328p pin map
![Atmega168PinMap2](https://user-images.githubusercontent.com/118654680/213867301-30c11749-6c87-4ad3-b327-468676f37743.png)

We can use the pin map to cross reference which VGA pin goes where on the breadboard. For example on the VGA schematics we can see that the RGB pins go to 
digital pin 7 on the arduino uno, but for us they will lead to pin number 13 on the ATmega328p or 2nd from the bottom, to the left.
