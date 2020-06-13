# Converting-Deep-Freezer-into-Refrigerator-using-Arduino
This project controls the temperature inside deep freezer and switches ON/OFF to maintain temperature. 
Due to unavailability of PIC burner kit, I have converted the code compatible with Arduino so that I can test it in practical.

Pin configuration : 
LM35 sensor connected to pin A0.
Arduino pins 2-5 data pins to lcd
Arduino pin 7 : LED
Arduino pin 8 and 10 : lcd enable and rs respectively.
rw pin of lcd is grounded.
servo connected to arduino at pin 13.
External power supply required for servo. If internal power supply is used, it will damage arduino board.

