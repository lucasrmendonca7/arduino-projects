 button (right arrow icon) to compile and upload the code to your Arduino board.

## Usage

Once the code is uploaded, the traffic light sequence will start automatically. Observe the LEDs changing states according to the programmed timing.

## Code Explanation

The `traffic_light.ino` file contains the Arduino sketch. Key parts of the code include:

- **Pin Definitions**: Defining which digital pins are connected to each LED.
- **`setup()` function**: Initializes the LED pins as outputs.
- **`loop()` function**: Contains the main logic for the traffic light sequence, including `digitalWrite()` commands to control the LEDs and `delay()` functions for timing.

```cpp
const int green_light = 13;
const int yellow_light = 11;
const int red_light = 9;

void setup() {
  pinMode(green_light, OUTPUT);
  pinMode(yellow_light, OUTPUT);
  pinMode(red_light, OUTPUT);
}

void loop() {
  digitalWrite(red_light, LOW);
  digitalWrite(green_light, HIGH);
  delay(5000);
  
  digitalWrite(green_light, LOW);
  digitalWrite(yellow_light, HIGH);
  delay(2000);
  
  digitalWrite(yellow_light, LOW);
  digitalWrite(red_light, HIGH);
  delay(5000);
}
```
