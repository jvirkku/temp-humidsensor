# Temperature-humidity sensor with Arduino
This is a simple setup for Arduino UNO, DHT11 humidity reader that displays the result on Lcd screen.

![PXL_20241203_121846375](https://github.com/user-attachments/assets/0ba2b8f3-90d7-418a-a716-8a38f51e8503)

## Equipment
* Arduino Uno
* HDT11 sensor
* Lcd 16x2
* I2c adapter
* Breadboard
* Jumper wires

You can find the code in a separate file in this repository.

Note that you need to install libraries in order for the code to work.
* [DHT11](https://github.com/dhrubasaha08/DHT11/) library created by Dhruba Saha.\
  You can find this library in Arduino IDE library manager
* [Wire.h](https://docs.arduino.cc/language-reference/en/functions/communication/wire/) for communicating with I2c, you should find this in your default libraries in Arduino IDE
* [LiquidCrystal I2C](https://docs.arduino.cc/libraries/liquidcrystal-i2c/) a library for I2C LCD displays.


HDT11 sensor\
![1000056029](https://github.com/user-attachments/assets/b4384ec3-d226-4ad3-842c-44009a7e7294)


Lcd 16x2 with I2c adapter soldered to it. You can also use the lcd without I2c adapter but then the schematics will be different.

![1000056027](https://github.com/user-attachments/assets/b276b522-84c9-4e8d-848d-52309d7b4da0)

## Schematics

![Näyttökuva 2024-12-03 151141](https://github.com/user-attachments/assets/25646f7e-f967-4761-8f8f-763459b9c8dd)
Photo credits: [Sherwin Ramos](https://arduinointro.com/articles/projects/step-by-step-guide-displaying-dht11-sensor-data-on-i2c-lcd-with-arduino/)
