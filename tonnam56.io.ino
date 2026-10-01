#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN 150
#define SERVOMAX 600

// แปลงองศาเป็น pulse
int angleToPulse(int angle) {
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

// สั่ง Servo
void servo(int ch, int angle) {
  pwm.setPWM(ch, 0, angleToPulse(angle));
}

// =========================
// ท่ายืนตรง
// =========================
void stand() {

  servo(0, 70);//เท้าขวา
  servo(1, 80);//หัวเข่าขวา
  servo(2, 70);//ต้นขาขวา
  servo(4, 20);//ต้นขาซ้าย
  servo(5, 90);//หัวเข่าซ้าย
  servo(6, 90);//เท้าซ้าย


  delay(1000);
}

// =========================
// เอียงซ้าย
// =========================
void leanLeft() {

  servo(0, 70);//เท้าขวา
  servo(1, 80);//หัวเข่าขวา
  servo(2, 70);//ต้นขาขวา
  servo(4, 20);//ต้นขาซ้าย
  servo(5, 98);//เท้าซ้าย
  servo(6, 90);//หัวเข่าซ้าย

  delay(800);
}

// =========================
// เอียงขวา
// =========================
void leanRight() {

  servo(0, 95);//เท้าขวา
  servo(1, 80);//หัวเข่าขวา
  servo(2, 70);//ต้นขาขวา
  servo(4, 20);//ต้นขาซ้าย
  servo(5, 90);//หัวเข่าซ้าย
  servo(6, 90);//เท้าซ้าย


  delay(800);
}

// =========================
// ท่าเดินขาขวา
// =========================
void rightStep() {

  servo(0, 95);//เท้าขวา
  servo(1, 80);//หัวเข่าขวา
  servo(2, 90);//ต้นขาขวา
  servo(4, 50);//ต้นขาซ้าย
  servo(5, 90);//หัวเข่าซ้าย
  servo(6, 90);//เท้าซ้าย


  delay(500);

  stand();
}

// =========================
// ท่าเดินขาซ้าย
// =========================
void leftStep() {

  servo(0, 70);//เท้าขวา
  servo(1, 80);//หัวเข่าขวา
  servo(2, 70);//ต้นขาขวา
  servo(4, 20);//ต้นขาซ้าย
  servo(5, 90);//หัวเข่าซ้าย
  servo(6, 90);//เท้าซ้าย

  delay(500);

  stand();
}

// =========================
// SETUP
// =========================
void setup() {

  Serial.begin(9600);

  pwm.begin();

  // Servo ใช้ 50 Hz
  pwm.setPWMFreq(50);

  delay(500);

  // เริ่มต้นยืนตรง
  stand();
}

// =========================
// LOOP
// =========================
void loop() {





}
