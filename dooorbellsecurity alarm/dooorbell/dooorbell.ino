// Define pins for Ultrasonic Sensor
const int trigPin = 9;
const int echoPin = 10;

// Define pin for Buzzer
const int buzzerPin = 8;

// Variable to store the duration of the echo pulse
long duration;

// Variable to store the distance calculated
int distance;

// Specify the distance threshold (in cm) for the alarm
const int threshold = 10;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Set the pin modes for the ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Set the pin mode for the buzzer
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Send a 10 microsecond pulse to the trig pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}

  // Read the echo pin and calculate
