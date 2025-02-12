# Automation-of-Lighting-System-with-Arduino-On-The-Basis-of-Natural-Light

**Abstract:**
The project “Automation of Lighting System with Arduino On The Basis Of Natural Light ”, focuses to automate lighting systems as per the ambient light levels. The Arduino senses variations in light intensity and initiates necessary actions, i.e., turning on or off lights, by using sensors such as LDRs. The technology offers ease and energy savings by adapting to changing environmental circumstances through the tuning of thresholds for light sensitivity. This project also demonstrates how software and hardware can be integrated to provide an adaptable and responsive autonomous lighting solution. The project was showcased in CSE Fest, Prime University, Bangladesh.


**Overview:**
This project implements a smart lighting system that automates indoor lighting based on ambient natural light levels using Light Dependent Resistors (LDRs) and an Arduino microcontroller. The system aims to improve energy efficiency by reducing unnecessary power consumption when sufficient natural light is available. Key features include automatic light control, adjustable sensitivity, and real-time monitoring of light intensity. The system utilizes an LDR to detect the amount of ambient light, and the Arduino processes this information to control the lights (represented by an LED in the prototype, but easily scalable to control actual lighting fixtures via relays).

**Circuit Diagram:**

![Circuit Diagram](https://raw.githubusercontent.com/Tisha-Tasmia/Automation-of-Lighting-System-with-Arduino-On-The-Basis-of-Natural-Light/refs/heads/main/circuit_diagram.png.png)


**Description:**

A smart lighting system that automates indoor lighting based on ambient natural light levels using Light Dependent Resistors (LDRs) and Arduino.

**Code Explanation:**
The Arduino code reads the analog value from the LDR, which represents the ambient light intensity. This value is compared to a predefined lightThreshold. If the light intensity is below the threshold (meaning it's dark), the Arduino turns on the LED (simulating the lights). If the light intensity is above the threshold (meaning it's bright enough), the LED is turned off. The code also prints the light intensity to the Serial Monitor, which is helpful for calibration and debugging.

**The Code: C++**

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

**Calibration Instructions:**
1.	Connect the circuit as shown in the diagram.
2.	Upload the Arduino code to the board.
3.	We will open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor).
4.	Observe the "Light Intensity" values displayed in the Serial Monitor. These values will change as we vary the amount of light falling on the LDR.
5.	Experiment with different lighting conditions (bright, dim, dark) and note the corresponding light intensity values.
6.	Based on our observations, determine the appropriate lightThreshold value. This value should be somewhere between the light intensity readings when it's bright enough and when it's too dark.
7.	Next, we modify the lightThreshold variable in our code with the chosen value.
8.	Re-upload the code to the Arduino.
9.	We now, test the system to ensure the lights turn on and off at the desired light levels. We may need to repeat steps 6-8 to fine-tune the threshold.

**Materials:**
•	Arduino Uno (or similar)

•	Light Dependent Resistor (LDR)

•	10kΩ Resistor

•	LED (or Relay for controlling actual lights)

•	Jumper wires

•	Breadboard (optional, but recommended for prototyping)


**Key Features:**

•	Automatic Light Control: Lights turn on/off automatically based on environmental brightness levels.

•	Energy Efficiency: Reduces unnecessary power consumption by adapting lighting based on natural light availability.

•	Adjustable Sensitivity: Threshold levels for light detection can be fine-tuned to suit different environments.

•	Real-Time Monitoring: Displays light intensity levels and system status through an interface.

•	Hardware-Software Integration: Uses Arduino and LDR sensors to communicate and make real-time decisions.

**Skill Set Demonstrated:**

•	Embedded Systems: Arduino programming

•	Hardware Integration: LDR sensors

•	Programming Languages: C++, MATLAB

•	IoT and Automation: Smart lighting control systems

**Contribution:**

•	Designed and built the circuit, integrating LDR sensors with Arduino for real-time light intensity detection.

•	Developed an algorithm for automatic switching of lights based on threshold values.

•	Conducted tests to optimize energy consumption and responsiveness.

•	Showcased the project at CSE Fest, demonstrating its practical applications.

**Future Improvements:**

•	Relay Control: Replace the LED with a relay to control actual lighting fixtures (e.g., lamps, bulbs). This would make the system practical for real-world applications.

•	Multiple Zones: Implement the system with multiple LDRs and relays to control lighting in different zones independently.

•	Wireless Communication: Integrate a wireless communication module (e.g., ESP8266, Bluetooth) to control and monitor the lighting system remotely via a smartphone app or web interface.

•	Smart Home Integration: Explore integrating the system with existing smart home platforms.

•	Dimming Control: Implement a Pulse Width Modulation (PWM) control to dim the lights based on the ambient light levels, rather than just switching them on/off.

•	Weather Data Integration: Incorporate weather data (e.g., from an online API) to anticipate changes in natural light and adjust the lighting accordingly.

•	Enclosure: Design and build a suitable enclosure for the project to make it aesthetically pleasing and protect the components.
