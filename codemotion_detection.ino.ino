// PIR sensor pin
const int pirPin = 2;

// LED pin
const int ledPin = 13;

void setup() {

  // Set PIR as input
  pinMode(pirPin, INPUT);

  // Set LED as output
  pinMode(ledPin, OUTPUT);

  // Start serial communication
  Serial.begin(9600);

  // Print startup message
  Serial.println("Motion Detection System Started");
}

void loop() {

  // Read PIR sensor
  int motion = digitalRead(pirPin);

  // Check motion
  if (motion == HIGH) {

    // Turn LED ON
    digitalWrite(ledPin, HIGH);

    // Print motion detected
    Serial.println("Motion Detected!");

  } else {

    // Turn LED OFF
    digitalWrite(ledPin, LOW);

    // Print no motion
    Serial.println("No Motion");
  }

  // Wait 100ms
  delay(100);
}
