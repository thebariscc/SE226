int LEDpins[] = {43, 44, 45, 46};
int buttonPins[] = {2, 3, 4, 5};
bool ledStates[] = {false, false, false, false};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(LEDpins[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(LEDpins[i], HIGH);
    delay(1000);
    digitalWrite(LEDpins[i], LOW);
  }

  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      ledStates[i] = !ledStates[i];
      digitalWrite(LEDpins[i], ledStates[i] ? HIGH : LOW);
      delay(300);
    }
  }
}