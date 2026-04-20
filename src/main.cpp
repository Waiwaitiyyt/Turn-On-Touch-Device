#include <Arduino.h>
#include <Servo.h>


Servo myServo;

const int SERVO_PIN = 9;  // 支持 PWM 的引脚

void setup() {
  myServo.attach(SERVO_PIN, 500, 2500);  // TGY-WP23 PWM 范围约 500~2500µs
  myServo.write(90);
}

void loop() {
  // 扫描：0° → 90° → 180° → 回 0°
  myServo.write(0);
  delay(1e4);

  myServo.write(90);
  delay(1e4);

}