   #include <Wire.h>
   #include <Adafruit_GFX.h>
   #include <Adafruit_SSD1306.h>

   #define OLED_ADDRESS 0x3C // I2C address of your OLED display

   Adafruit_SSD1306 display(128, 64, &Wire, OLED_ADDRESS);

   void setup() {
     // Initialize the OLED display
     display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
     display.clearDisplay();
     display.setTextColor(WHITE);
   }

   void loop() {
     display.clearDisplay();

     display.setTextSize(2);
     display.setCursor(0, 0);
     display.println("Hello, World!");

     display.display();
     delay(1000);
   }
