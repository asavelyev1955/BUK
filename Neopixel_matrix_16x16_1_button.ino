
#include <Adafruit_NeoPixel.h>

#define BUTTON_PIN1  2
#define red_lamp     3
#define green_lamp   4   
#define PIXEL_PIN    6    // Digital IO pin connected to the NeoPixels.
#define PIXEL_COUNT 256
#define ANALOG_PIN_RED       0 // потенциометр 1
#define ANALOG_PIN_GREEN     1 // потенциометр 2
#define ANALOG_PIN_BLUE      2 // потенциометр 3

const byte ColoursNum = 3; // кол-во потенциометров
unsigned int COLOURS[ColoursNum]; 
byte ANALOG_PINS[ColoursNum] = {ANALOG_PIN_RED, ANALOG_PIN_GREEN, ANALOG_PIN_BLUE};

// Parameter 1 = number of pixels in strip,  neopixel stick has 8
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGB     Pixels are wired for RGB bitstream
//   NEO_GRB     Pixels are wired for GRB bitstream, correct for neopixel stick
//   NEO_KHZ400  400 KHz bitstream (e.g. FLORA pixels)
//   NEO_KHZ800  800 KHz bitstream (e.g. High Density LED strip), correct for neopixel stick
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool oldState1 = HIGH;
int showType = 0;
unsigned long lastTime;

void setup() {
  
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
  pinMode(red_lamp, OUTPUT);
  pinMode(green_lamp, OUTPUT);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  lastTime = millis();
}

void setNumber19 () {
   for (byte i = 64; i < 81; i++)  
      strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]);  
    strip.setPixelColor(28, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(34, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(48, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(47, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(62, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(111, COLOURS[0], COLOURS[1], COLOURS[2]);
           
  for (byte i = 128;  i < 136; i++)  
     strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
        for (int i = 240; i < 256; i++) 
           strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
             for (int i = 136; i < 143; i++) 
                 strip.setPixelColor(i, 0, 0, 0);
      strip.setPixelColor(159, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(160, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(191, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(192, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(223, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(224, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(152, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(167, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(184, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(199, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(216, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(231, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(143, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(144, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(175, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(176, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(207, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(208, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(239, COLOURS[0], COLOURS[1], COLOURS[2]);     
   strip.show();
}

void setNumber18() {
    for (byte i = 136;  i < 143; i++)  
      strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
   strip.show();
}

void setNumber17() {
      for (byte i = 130;  i < 145; i++)  
            strip.setPixelColor(i, 0, 0, 0);   
            strip.setPixelColor(175, 0, 0, 0); 
            strip.setPixelColor(176, 0, 0, 0);
            strip.setPixelColor(207, 0, 0, 0);
            strip.setPixelColor(208, 0, 0, 0);
            strip.setPixelColor(239, 0, 0, 0);
            strip.setPixelColor(152, 0, 0, 0);
            strip.setPixelColor(167, 0, 0, 0);
            strip.setPixelColor(184, 0, 0, 0);
            strip.setPixelColor(199, 0, 0, 0);
            strip.setPixelColor(216, 0, 0, 0);
            strip.setPixelColor(231, 0, 0, 0);            
          strip.show();
}

void setNumber16() {
      for (byte i = 130;  i < 145; i++)  
        strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
         for (int i = 248;  i < 256; i++)  
           strip.setPixelColor(i, 0, 0, 0); 
            strip.setPixelColor(175, COLOURS[0], COLOURS[1], COLOURS[2]); 
            strip.setPixelColor(176, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(207, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(208, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(239, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(152, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(167, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(184, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(199, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(216, COLOURS[0], COLOURS[1], COLOURS[2]);
            strip.setPixelColor(231, COLOURS[0], COLOURS[1], COLOURS[2]);   
          strip.show();
}

void setNumber15() {
  for (byte i = 136;  i < 143; i++)
      strip.setPixelColor(i, 0, 0, 0);
          strip.show();
}

void setNumber14() {
      for (byte i = 249;  i < 255; i++)  
     strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
            strip.setPixelColor(159, 0, 0, 0);   
            strip.setPixelColor(160, 0, 0, 0); 
            strip.setPixelColor(191, 0, 0, 0);
            strip.setPixelColor(192, 0, 0, 0);
            strip.setPixelColor(223, 0, 0, 0);
            strip.setPixelColor(224, 0, 0, 0);
            strip.setPixelColor(255, 0, 0, 0);
            strip.setPixelColor(143, 0, 0, 0);
            strip.setPixelColor(144, 0, 0, 0);
            strip.setPixelColor(175, 0, 0, 0);
            strip.setPixelColor(176, 0, 0, 0);
            strip.setPixelColor(207, 0, 0, 0);
            strip.setPixelColor(208, 0, 0, 0);   
            strip.setPixelColor(239, 0, 0, 0);
    strip.show();
 }

void setNumber13() {
      for (byte i = 129;  i < 136; i++)  
         strip.setPixelColor(i, 0, 0, 0); 
      strip.setPixelColor(159, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(160, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(191, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(192, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(223, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(224, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(143, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(144, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(175, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(176, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(207, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(208, COLOURS[0], COLOURS[1], COLOURS[2]);
strip.setPixelColor(239, COLOURS[0], COLOURS[1], COLOURS[2]);
   strip.show();
}

void setNumber12() {
      for (byte i = 136;  i < 143; i++)  
     strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
         for (byte i = 241;  i < 248; i++)  
     strip.setPixelColor(i, 0, 0, 0); 
   strip.show();
}

void setNumber11() {
      for (int i = 128;  i < 256; i++)  
     strip.setPixelColor(i, 0, 0, 0); 
         for (byte i = 192;  i < 209; i++)  
            strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]);
     strip.setPixelColor(175, COLOURS[0], COLOURS[1], COLOURS[2]); 
     strip.setPixelColor(176, COLOURS[0], COLOURS[1], COLOURS[2]);
     strip.setPixelColor(239, COLOURS[0], COLOURS[1], COLOURS[2]);
     strip.setPixelColor(156, COLOURS[0], COLOURS[1], COLOURS[2]);
     strip.setPixelColor(162, COLOURS[0], COLOURS[1], COLOURS[2]);
     strip.setPixelColor(190, COLOURS[0], COLOURS[1], COLOURS[2]);
   strip.show();
}

void setNumber10() {
      for (int i = 144;  i < 256; i++)  
     strip.setPixelColor(i, 0, 0, 0); 
         for (byte i = 129;  i < 143; i++)  
     strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
           for (byte i = 241;  i < 255; i++)  
     strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]); 
      strip.setPixelColor(159, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(160, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(191, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(192, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(223, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(224, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(144, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(175, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(176, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(207, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(208, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(239, COLOURS[0], COLOURS[1], COLOURS[2]);   
   strip.show();
}

void setNumber9 () { 
      for (int i = 0; i < 128; i++) 
           strip.setPixelColor(i, 0, 0, 0);
        for (int i = 136; i < 143; i++) 
           strip.setPixelColor(i, 0, 0, 0);
      strip.setPixelColor(152, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(167, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(184, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(199, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(216, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.setPixelColor(231, COLOURS[0], COLOURS[1], COLOURS[2]);
       strip.show();
}



void regColor() {
  
  for (byte i = 0; i < ColoursNum; i++)
    COLOURS[i] = analogRead(ANALOG_PINS[i]) / 4;  
   for (byte i = 64; i < 81; i++) {
    strip.setPixelColor(i, COLOURS[0], COLOURS[1], COLOURS[2]);  
    strip.setPixelColor(28, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(34, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(48, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(47, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(62, COLOURS[0], COLOURS[1], COLOURS[2]);
    strip.setPixelColor(111, COLOURS[0], COLOURS[1], COLOURS[2]);
      strip.show();
      }
}
 

void startShow(int i) {
  switch(i){
    case 1: setNumber19();
            break;
    case 2: setNumber18();
            break;
    case 3: setNumber17();
            break;
    case 4: setNumber16();
            break;
    case 5: setNumber15();
            break;
    case 6: setNumber14();
            break;
    case 7: setNumber13();
            break;
    case 8: setNumber12();
            break;
    case 9: setNumber11();
            break;
    case 10: setNumber10();
            break;
    case 11: setNumber9();
            break;
    case 12: setNumber18();
            break;
    case 13: setNumber17();
            break;
    case 14: setNumber16();
            break;
    case 15: setNumber15();
            break;
    case 16: setNumber14();
            break;
    case 17: setNumber13();
            break;
    case 18: setNumber12();
            break;     
    case 19: setNumber11();
            break;   
    case 0: setNumber10();
            break;
  }
}

void loop() {
  
   while ((millis() - lastTime) < 10000) {
    digitalWrite(red_lamp, HIGH);
    regColor();
   }
    digitalWrite(red_lamp, LOW);
    digitalWrite(green_lamp, HIGH);
     // Get current button state.
  bool newState1 = digitalRead(BUTTON_PIN1);    
           
  // Check if state changed from high to low (button press).
  if (newState1 == LOW && oldState1 == HIGH) {
    // Short delay to debounce button.
    delay(50);
    
    // Check if button is still low after debounce.
    newState1 = digitalRead(BUTTON_PIN1);
    if (newState1 == LOW) {
      showType++;
      if (showType > 19)
        showType=0;
      startShow(showType);
    }
  }
  
  // Set the last button state to the old state.
  oldState1 = newState1;

}




