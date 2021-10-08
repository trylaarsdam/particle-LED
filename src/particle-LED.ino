/*
 * Project particle-LED
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL)
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  LEDStatus blinkRed(RGB_COLOR_ORANGE, LED_PATTERN_BLINK, LED_SPEED_NORMAL, LED_PRIORITY_IMPORTANT);
  blinkRed.setActive(true);
    delay(3000);
  blinkRed.setActive(false);
    delay(1000);
}