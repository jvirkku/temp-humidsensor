# Temperature-humidity sensor with Arduino
This is a simple setup for Arduino UNO, DHT11 humidity reader that displays the result on Lcd screen.

![PXL_20241203_121846375](https://github.com/user-attachments/assets/0ba2b8f3-90d7-418a-a716-8a38f51e8503)

# Equipment
* Arduino Uno
* HDT11 sensor
* Lcd 16x2
* I2c adapter
* Breadboard
* Jumper wires

You can find the code and the schematics for wiring in separate files in this repository.
Note that you need to install libraries in order for the code to work.
* [DHT11](https://github.com/dhrubasaha08/DHT11/) library created by Dhruba Saha
  You can find this library in Arduino IDE library manager
* Wire.h for communicating with I2c, you should find this in your default libraries in Arduino IDE
* [LiquidCrystal I2C](https://docs.arduino.cc/libraries/liquidcrystal-i2c/) A library for I2C LCD displays.


![1000056029](https://github.com/user-attachments/assets/483781e7-6b07-4848-87aa-df149e181e45)
HDT11 sensor

![1000056027](https://github.com/user-attachments/assets/b7a2885e-61a9-4e29-9d96-2af7ad735c21)
Lcd 16x2 with I2c adapter soldered to it. You can also use the lcd without I2c adapter but then the schematics will be different.
