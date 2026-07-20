#include <Wire.h>

#include "config.h"
#include "motor.h"
#include "smc.h"

Motor robot;

SlidingModeController smc;

float angle = 0;
float gyro = 0;

void setup()
{
    Serial.begin(115200);

    Wire.begin();

    robot.begin();
}

void loop()
{
    // Replace with MPU6050 reading
    angle = 0;
    gyro = 0;

    float pwm =
        smc.compute(
            angle,
            gyro,
            0);

    robot.move(pwm,pwm);

    Serial.print("Angle : ");
    Serial.print(angle);

    Serial.print(" PWM : ");
    Serial.println(pwm);

    delay(10);
}
