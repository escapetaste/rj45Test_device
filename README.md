# rj45Test_device
A simple running light to test RJ45 installation using an arduino


This is a useful little circuit to test fixed RJ45 installations or cables.

It works with an arduino on one side, that can be one of the oldest on the bottom of your circuitbox, and a satellite circuit to check the connection.
As you can see from the images, the device is quickly hacked together but fulfils my needs.
You know that nothing lasts longer than a good provisional arrangement.

If you connect the additional sockets 1:1 you can easily check ethernetcables too. Well, you must use an existing wall socket to do so.

The Arduino sets its ports so that a running light on the reciever is achieved. With the optional key or switch you can change speed if you want to examine the lines more exactly.
So to achieve this the LEDs are connected with diodes in the oppsite direction. Now any port set to GND delivers ground to the circuit and each port set to high lights the led on that branch.

Feel free to modify the code for your needs, it is scarily simple.

To take care of the arduino-ports load, only one led at a time is being lit.
Additionally the resistors are placed near the arduino, so even a short cut wont hurt the device.

What you need is:
		
		1x Arduino with Atmega 168 is strong enough
		
		2x RJ45 Connectors, i used a patchcable and cut it in two halves
		
		1x switch
		
		8x Leds that light up well at 5V in row with an 1k resistor
		
		8x diodes of your favourite type, 1N4148 e.g.
		
		8x resistors 560ohm
		
		1x resistor 1k, you can also use two 560ohm resistors in a row in case you have to order resistors, then you only need 10 of the 560ohm type
		
		a power source for the arduino
		
		
and of course at least the arduino IDE to get the sketch programmed.
