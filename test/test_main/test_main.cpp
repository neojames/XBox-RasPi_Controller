// test_main.cpp
// Runs all test cases
// James Bolton (james@neojames.me)

#include <Arduino.h>
//#include <unity.h>

// Setup

void setUp(void) {

}

void tearDown(void) {

}

// Main Program Tests

// // Test that enviroment is sane
void test_led_builtin_pin_number(void) {
    TEST_ASSERT_EQUAL(13, LED_BUILTIN);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
    RUN_TEST(test_led_builtin_pin_number);
}

void loop() {
    UNITY_END(); // stop unit testing
}