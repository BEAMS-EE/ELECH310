# Common questions for the project of ELECH310

## PSoC Creator
> *I have a problem of version in PsoC Creator / I cannot find the kit is the list / The kit is not recognized by my computer.*

Check that you installed all software: PSoC Creator and the extra kit installer (check lab for links), also check if your kit is upgraded to the latest version, if not upgrade it with PSoC Programmer (which is a separate software from PSoC Creator)

## Keypad
> *I added the files keypad.h and keypad.c in the header and sources files but PSoC Creator does not recognize them.*

Before including them in PSoC Creator, you need to copy the files in the correct location in your computer. That is the folder of your project (where your main.c) is located.
It's usually something like `Documents/PSoC Creator/project_name/project_name.cysdn.`
And after that you can do `Header -> add -> existing item` and `Source -> add -> existing item` in PSoC Creator.

## LCD
> *I get weird symbols of when writing to the LCD. The LCD screen works alone fine. I was able to write something to it. It is when trying to send keypad inputs to the LCD screen that things get weird.*

The function `keypadScan()` returns a char (ASCII character), you are probably trying to display the hexadecimal equivalent of the number represented has a char.
Look at the ascii table to understand how characters are coded: [https://simple.wikipedia.org/wiki/ASCII](https://simple.wikipedia.org/wiki/ASCII "https://simple.wikipedia.org/wiki/ascii") 
(look at the column hex and what is shown on the screen when you push a button)
To make a conversion look at page 16 of the project in "sending data to PC":
Based on how ASCII characters are coded, can you explain why this code snippet works?
`char value_char = value_int + ’0’;`

> *My text is not fully shown on the LCD screen, when i write "Hello World" it only write "Hello Wo".*

The LCD screen is divided in 2 parts, that are seen in the code as 2 "lines", if you are
writing more than 8 characters to the screen, you should change the position in the LCD before writing the second half of the characters (char 8 to 15 of your string).
Use `LCD_Position` for this

## ADC
>  *I cannot put more than one ADC in my project, it says:  "Resource limit: Maximum number of Delta-Sigma ADC exceeded (max=1, needed=2)".*

This is an hardware limitation, there is no way to instantiate more than one ADC in this kit. You have to understand that everything in the top design is not purely software, it also depends on the hardware capabilities of the kit.
That being said, if you need to connect multiple analog sources, you can use a multiplexer (`Analog Mux`) to be able to connect multiple inputs in one ADC.

> *My potentiometer is stuck at a value and they suddenly changes when I turn it more than half-way / I getting weird values from my ADC.*

You probably have one or two of those problems:

 - your ADC is not properly configured: Check the `Input Range` of your ADC, and check that it is set to `Vssa to Vdda` so that you use the full range of value computable by the ADC;
 - you are using `ADC_GetResult16`, instead of `ADC_GetResult32` as stated in the datasheet when the ADC is configured with 16 bits precision.

## Timer
> *I cannot get proper period in my Timer, it is too small.*

The default clock of a timer is the `BUS_CLK` of 24MHz, which makes for a maximum period of 2.731ms, if you want to increase this you can either

 - create a counter that increments at every overflow of the timer;
 - create a new clock source by going to the `BUS_CLK`, ticking `New` in `Clock type`, there you will be able to select any frequency to the clock, the maximum period will change accordingly.

