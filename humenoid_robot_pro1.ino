#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


#define SERVOMIN  150  // พัลส์ที่ตำแหน่ง 0 องศา
#define SERVOMAX  600  // พัลส์ที่ตำแหน่ง 180 องศา


#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// วางอาร์เรย์ smiley_happy[] ที่นี่
const unsigned char smiley_happy [] PROGMEM = {
  // ... ใส่บิตแมป happy ที่ได้จาก Image2cpp
};

// วางอาร์เรย์ smiley_sad[] ที่นี่
const unsigned char smiley_sad [] PROGMEM = {
  // ... ใส่บิตแมป sad
};

// วางอาร์เรย์ smiley_neutral[] ที่นี่
const unsigned char smiley_neutral [] PROGMEM = {
  // ... ใส่บิตแมป neutral
};



// ฟังก์ชันแปลงองศา (0-180) เป็นพัลส์
int angleToPulse(int angle) {
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

void setup() {

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  //วาดตาซ้าย
  display.fillCircle(50, 20, 3, SSD1306_WHITE);

  // วาดตาขวา
  display.fillCircle(78, 20, 3, SSD1306_WHITE);

  // วาดปากแบบยิ้ม (โค้งล่าง)
  drawSmile(64, 40, 14, 20, 160);

  display.display();



  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);  // ความถี่ 50Hz สำหรับ servo
  delay(20);


  pwm.setPWM(0, 0, angleToPulse(90));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(80));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(90));
  pwm.setPWM(15, 0, angleToPulse(60));

 
}

void loop() {

  showExpression(smiley_happy);
  delay(2000);
  






  // ไม่ต้องทำอะไรใน loop ถ้าคุณสั่งแค่ตอนเปิดเครื่อง
  pwm.setPWM(0, 0, angleToPulse(88));
  pwm.setPWM(1, 0, angleToPulse(80));
  pwm.setPWM(2, 0, angleToPulse(40));
  pwm.setPWM(3, 0, angleToPulse(100));
  pwm.setPWM(4, 0, angleToPulse(120));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(85));
  pwm.setPWM(15, 0, angleToPulse(90));
  delay(500);
  pwm.setPWM(0, 0, angleToPulse(90));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(50));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(90));
  pwm.setPWM(15, 0, angleToPulse(60));
   delay(1000);
 pwm.setPWM(0, 0, angleToPulse(88));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(45));
  pwm.setPWM(3, 0, angleToPulse(125));
  pwm.setPWM(4, 0, angleToPulse(60));

  pwm.setPWM(11, 0, angleToPulse(120));
  pwm.setPWM(12, 0, angleToPulse(60));
  pwm.setPWM(13, 0, angleToPulse(100));
  pwm.setPWM(14, 0, angleToPulse(100));
  pwm.setPWM(15, 0, angleToPulse(30));
  delay(500);
  pwm.setPWM(0, 0, angleToPulse(90));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(50));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(90));
  pwm.setPWM(15, 0, angleToPulse(60));
   delay(1000);
  }


void right(){
   pwm.setPWM(0, 0, angleToPulse(70));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(90));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(70));

  pwm.setPWM(11, 0, angleToPulse(120));
  pwm.setPWM(12, 0, angleToPulse(35));
  pwm.setPWM(13, 0, angleToPulse(110));
  pwm.setPWM(14, 0, angleToPulse(85));
  pwm.setPWM(15, 0, angleToPulse(65));
  delay(500);
  pwm.setPWM(0, 0, angleToPulse(90));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(50));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(90));
  pwm.setPWM(15, 0, angleToPulse(60));
   delay(1000);
  
}
  void woke(){
  pwm.setPWM(0, 0, angleToPulse(88));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(45));
  pwm.setPWM(3, 0, angleToPulse(125));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(120));
  pwm.setPWM(12, 0, angleToPulse(40));
  pwm.setPWM(13, 0, angleToPulse(110));
  pwm.setPWM(14, 0, angleToPulse(100));
  pwm.setPWM(15, 0, angleToPulse(65));
  delay(500);
  pwm.setPWM(0, 0, angleToPulse(90));
  pwm.setPWM(1, 0, angleToPulse(110));
  pwm.setPWM(2, 0, angleToPulse(50));
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(4, 0, angleToPulse(90));

  pwm.setPWM(11, 0, angleToPulse(118));
  pwm.setPWM(12, 0, angleToPulse(20));
  pwm.setPWM(13, 0, angleToPulse(120));
  pwm.setPWM(14, 0, angleToPulse(90));
  pwm.setPWM(15, 0, angleToPulse(60));
   delay(1000);
  }

  void showExpression(const unsigned char* bitmap) {
  display.clearDisplay();
  display.drawBitmap(32, 0, bitmap, 64, 64, SSD1306_WHITE);
  display.display();
}

// วาดปาก (เส้นโค้งยิ้ม)
void drawSmile(int cx, int cy, int r, int startAngle, int endAngle) {
  for (int i = startAngle; i <= endAngle; i++) {
    float rad = i * 0.0174533; // องศา → เรเดียน
    int x = cx + cos(rad) * r;
    int y = cy + sin(rad) * r;
    display.drawPixel(x, y, SSD1306_WHITE);
  }
}
