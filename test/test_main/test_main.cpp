// test_main.cpp
// Runs all test cases
// James Bolton (james@neojames.me)

#include <unity.h>

// Setup

//void setUp(void) {
//
//}
//
//void tearDown(void) {
//
//}

// Main Program Tests

// // Test that enviroment is sane

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
}

void loop() {
    UNITY_BEGIN();
    UNITY_END(); // stop unit testing
}