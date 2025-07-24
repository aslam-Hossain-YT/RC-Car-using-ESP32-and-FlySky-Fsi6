// FlySky Receiver Input Pins
#define CH1_PIN 35  // Forward/Backward
#define CH2_PIN 34  // Left/Right
#define CH5_PIN 39  // Speed Mode Switch

void setup() {
  Serial.begin(115200);

  // Set receiver pins
  pinMode(CH1_PIN, INPUT);
  pinMode(CH2_PIN, INPUT);
  pinMode(CH5_PIN, INPUT);

}

void loop() {
  // Read FlySky PWM signals
  int ch1 = pulseIn(CH1_PIN, HIGH, 25000); // Forward/Backward
  int ch2 = pulseIn(CH2_PIN, HIGH, 25000); // Left/Right
  int ch5 = pulseIn(CH5_PIN, HIGH, 25000); // Speed Mode Switch

  
  // Debug output
  Serial.print("CH1: "); Serial.print(ch1);
  Serial.print(" CH2: "); Serial.print(ch2);
  Serial.print(" CH2: "); Serial.println(ch5);

}