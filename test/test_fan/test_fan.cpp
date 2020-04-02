// test_fan.cpp
// Testing case for fan functions
// James Bolton (james@neojames.me)

#include <unity.h>
#include <fan.h>

// Setup
int sense = 0;
int control = 0;
int temprature = 0;

// Main Program Tests

UNITY_BEGIN();
// Test you can read sense speed (rpm)
TEST_ASSERT_EQUAL_INT(450, fanSpeed());

// Test that you can set fan speed
setSpeed(2200)
TEST_ASSERT_EQUAL_INT(2200, fanSpeed());

//Test low fan speed
temprature = 30;
setFan()
TEST_ASSERT_EQUAL_INT(450, fanSpeed());

//Test marginal fan speed
temprature = 50;
setFan()
TEST_ASSERT_EQUAL_INT(450, fanSpeed());

//Test high fan speed
temprature = 70;
setFan()
TEST_ASSERT_EQUAL_INT(1512.5, fanSpeed());

//Test max fan speed
temprature = 79;
setFan()
TEST_ASSERT_EQUAL_INT(2200, fanSpeed());

UNITY_END();