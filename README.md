# Dual-Axis Solar Tracking System

## Project Overview

This project creates a simulation of an axis solar tracking system that uses an Arduino Uno, four photoresistors (LDRs) and two servo motors inside Tinkercad.

The axis solar tracking system compares light intensity from different directions and moves the servo motors so that the simulated solar panel points toward the brighter side.

## Components Used

- Arduino Uno R3

- 4 photoresistors (LDRs)

- 4 resistors (10 kΩ)

- 2 servo motors

- Breadboard and jumper wires

## Working Principle

Four LDRs measure intensity from the top, bottom, left and right directions. The axis solar tracking system reads the sensor values with `analogRead()` and computes the differences between each pair of opposing sensors.

If the difference is larger than a set threshold the axis solar tracking system moves the corresponding servo in small steps. If the difference falls inside the threshold the axis solar tracking system stops adjusting that axis. The servo angles stay within a range.

## Technologies

- Arduino C/C++

- Tinkercad Circuits

- Servo library

## Simulation

**Tinkercad circuit:** https://www.tinkercad.com/things/4UugR2vkBu3/editel?returnTo=%2Fdashboard&sharecode=nWWsVljJnPJICMfJQ-Qn6z5zoT8V0z7iUgE_XDH9CEo

## Testing

The axis solar tracking system was tested in Tinkercad by varying the light intensity on the LDRs and watching the sensor readings and servo movements, in the Serial Monitor.

## Real-World Applications

- Solar panel orientation systems

- Solar energy research and educational prototypes

- Automated tracking systems

## Limitations and Future Improvements

The current project is only a simulation. A real axis solar tracking system would need proper mechanical mounting, sensor calibration, weather protection and a reliable power supply.
Future improvements could add energy generation measurements. Make the tracking more robust when outdoor light changes.
