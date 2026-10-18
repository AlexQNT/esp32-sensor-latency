Oct 15: Built a blink circuit on pin 4 with a 120 ohm resistor and tested serial hello at 115200 baud. Handled all the wiring, code typing, and debugging independently. Predicted 10 blinks in 10 seconds and 20 lines in 10 seconds, and visually counted about 10 to 11 and 19. Initial mistakes involved function names, confusing resistors with transistors, and LED leg spacing.

Oct 16: The PulseView nightly build crashed due to a missing Python library, but version 0.4.2 opens successfully on the demo device. Cleaned up two sketch files that each held multiple sketches and pushed two commits to the repo. The logic analyzer requires a cable I do not have with me, and the socket appears to be mini-USB.

Oct 18: So, I did some predictions  before taking measurements on P4 and they are: 500 ms on and 500ms off.
A bit about setup. I connected logic analyzer to the hub, then i used M/F wires, M side's were plugged in to CH1 and GND ports, and CH1 was connected to the same row where resistor leg sits, and GND was connected to where short leg of LED light sits.
Some parts also went wrong. Today, after re-assembly LED was not blinking but i fixed this problem after switching P4 and GND wires.
Measured: 4 periods between falling edges, 4000100 us total, so one period is 1000025 us. Predicted 1000 ms.