int ldrPin = A0;

int leds[] = {9, 10, 11, 12, 13};

int threshold = 500;

void setup() {
  for(int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  Serial.println(lightValue);

  if(lightValue < threshold) {
    for(int i = 0; i < 5; i++) {
      digitalWrite(leds[i], HIGH);
    }
  }
  else {
    for(int i = 0; i < 5; i++) {
      digitalWrite(leds[i], LOW);
    }
  }

  delay(200);
}
