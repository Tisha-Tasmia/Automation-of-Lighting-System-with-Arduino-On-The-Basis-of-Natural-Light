// Arduino code for Automated Lighting System based on Natural Light

// Define pins
const int ldrPin = A0; // LDR connected to analog pin A0
const int ledPin = 13; // LED connected to digital pin 13 (or relay controlling lights)

// Threshold for light intensity (adjust as needed)
int lightThreshold = 500; // Example value, calibrate for your environment

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(ldrPin, INPUT);  // Set LDR pin as input
}

void loop() {
  // Read light intensity from LDR
  int lightIntensity = analogRead(ldrPin);

  // Print light intensity for monitoring (optional)
  Serial.print("Light Intensity: ");
  Serial.println(lightIntensity);

  // Check if light intensity is below threshold
  if (lightIntensity < lightThreshold) {
    // Turn on the lights
    digitalWrite(ledPin, HIGH);
    Serial.println("Lights ON");
  } else {
    // Turn off the lights
    digitalWrite(ledPin, LOW);
    Serial.println("Lights OFF");
  }

  delay(100); // Small delay for stability (optional)
}
