#include <Arduino.h>
#include "config.h"
#include "motor.h"

void Motor::begin()
{
    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

    pinMode(ENB, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

void Motor::driveLeft(int pwm)
{
    pwm = constrain(pwm,-255,255);

    if(pwm>=0)
    {
        digitalWrite(IN1,HIGH);
        digitalWrite(IN2,LOW);
        analogWrite(ENA,pwm);
    }
    else
    {
        digitalWrite(IN1,LOW);
        digitalWrite(IN2,HIGH);
        analogWrite(ENA,-pwm);
    }
}

void Motor::driveRight(int pwm)
{
    pwm = constrain(pwm,-255,255);

    if(pwm>=0)
    {
        digitalWrite(IN3,HIGH);
        digitalWrite(IN4,LOW);
        analogWrite(ENB,pwm);
    }
    else
    {
        digitalWrite(IN3,LOW);
        digitalWrite(IN4,HIGH);
        analogWrite(ENB,-pwm);
    }
}

void Motor::move(int leftPWM,int rightPWM)
{
    driveLeft(leftPWM);
    driveRight(rightPWM);
}

void Motor::stop()
{
    analogWrite(ENA,0);
    analogWrite(ENB,0);
}
