# Test Plan And Output
# High level Test Case
|Test ID|Description|Expected i/p|Expected o/p|Actual O/p|status|
|---|----|---|---|---|---|
|HLR1|LCD Display On|Program execution|LCD should Display "Parking System"|Display "Parking System"|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|HLR2|IR SENSOR1 Detect Vehicle entry |User execution|Check for slot availability and Open barricade|Check the availability and open barricade|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|HLR3|IR SENSOR2 Detect Vehicle entry |User execution|Check for slot availability and Open barricade|Check the availability and open barricade|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|HLR4|Servo rotation when ir sensor detect vehicle and made to allow|Program Execution|Servo rotate 90 degree|Servo rotate 90 degree|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|


# Low level Test case
|Test ID|Description|Expected i/p|Expected o/p|Actual O/p|status|
|---|----|---|---|---|---|
|HLR1|
|LLR1|LCD Display Slot availability|user input|Display welcome slot avaialble|welcome slot available|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|LLR2|LCD Display Slot full|user input|Display Sorry no slot|sorry no slot|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|HLR2|
|LLR1|IR Sensor1 detect vehicle but slot is full led on|user input|led blink|led blink|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|LLR2|IR Sensor1 detect vehicle no slot available|program execution|BUZZER sound|Buzzer Sound|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|HLR3|
|LLR1| SERVO Rotation for entry of vehicle |program execution|Servo rotate|Servo rotate|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|
|LLR2|Servo Rotation for exit of vehicle|program execution|Servo Rotate|Servo Rotate|![right](https://user-images.githubusercontent.com/89115879/157066408-8fe0a8c7-4d1c-42c3-b2ac-ee2f14991684.PNG)|


# Test Output
![test1](https://user-images.githubusercontent.com/89115879/157079668-64c03963-b300-467d-a165-9ed4f74946a1.PNG)


![test2](https://user-images.githubusercontent.com/89115879/157079760-b64716e4-23a9-4c91-958a-03967a0eca78.PNG)

![test3](https://user-images.githubusercontent.com/89115879/157080258-56306e98-9620-42e0-9612-de21c1d2caa0.PNG)


![test4](https://user-images.githubusercontent.com/89115879/157080478-c0b273b4-e9b7-4f86-ac20-c26c82b812de.PNG)


