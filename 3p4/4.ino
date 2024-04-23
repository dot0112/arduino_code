#include <LiquidCrystal_I2C.h>

// include the library code:
//#include <LiquidCrystal.h>
#include <wire.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27, 16, 2);
byte gong[8] = {
	0b10001,
	0b10010,
	0b11100,
	0b11000,
	0b10100,
	0b10010,
	0b10001,
	0b00000
};

byte choi[8] = {
	0b01100,
	0b10000,
	0b10000,
	0b01101,
	0b10100,
	0b01001,
	0b01001,
	0b01011
};

byte kim[8] = {
	0b11101,
	0b00101,
	0b00101,
	0b00001,
	0b11111,
	0b10001,
	0b11111,
	0b00000
};
void setup() {
  Serial.begin(9600);
  
  //lcd.createChar(2,gong);
  //lcd.backlight();
  //delay(500);
  //lcd.backlight();
 lcd.createChar(0,gong);
 lcd.createChar(1,kim);
  lcd.createChar(7,choi);
  //delay(500);
//lcd.init();
//lcd.init();
  lcd.backlight();
  
  lcd.begin(16, 2);
  Wire.begin();
  lcd.print("a");
  delay(1000);
  //lcd.clear();
  delay(3000);
//lcd.createChar(3,gong);
//lcd.write(byte(2));
  lcd.write(byte(1));
  //lcd.write(byte(2));
  //lcd.print("fffzz");
  //lcd.write(7);
delay(1000);
}


void loop() {
/*// scroll 13 positions (string length) to the left
// to move it offscreen left:
for (int positionCounter = 0; positionCounter < 3; positionCounter++) {
// scroll one position left: (왼쪽으로 scroll(0 ~12) : 글자 13자 고려( 마지막 글자 !만 남기고 scroll)
lcd.scrollDisplayLeft();
// wait a bit:
delay(150);
}
// scroll 29 positions (string length + display length) to the right
// to move it offscreen right:
for (int positionCounter = 0; positionCounter < 19;positionCounter++) {
// scroll one position right (우측으로 scroll (0 ~28): 글자수+width = 13+16=29(마지막 글자 남김) )
lcd.scrollDisplayRight();
// wait a bit:
delay(150);
}
// scroll 16 positions (display length + string length) to the left
// to move it back to center:
for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
// scroll one position left: (왼쪽으로 scroll :0 ~ 15 ( 15(마지막)➔ 0 : 시작 위치로)
lcd.scrollDisplayLeft();
// wait a bit:
delay(150);
}
// delay at the end of the full loop:
delay(1000);*/
}