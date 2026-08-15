# Automated Soil Moisture Management System

> An automated indoor plant watering system designed to eliminate manual watering, maintain optimal humidity levels, and ensure plant health through calibrated sensor technology.

---

## Overview

Indoor plant care often suffers from inconsistent watering schedules—leading to overwatering, underwatering, or unnecessary manual effort. Developed as part of the **Management and Sensor** course, this project introduces an automated solution to make indoor planting easier, more time-saving, and highly sustainable.

By integrating soil moisture sensors with microcontrollers, the system continuously monitors plant soil conditions and triggers automated irrigation only when necessary, eliminating guesswork and promoting optimal plant growth and longevity.

---

## Key Objectives

* **Automate Irrigation:** Completely remove the need for manual, scheduled plant watering.
* **Precise Humidity & Moisture Control:** Calibrate soil moisture thresholds to maintain optimal hydration for specific plant species.
* **Resource Sustainability:** Prevent water waste while ensuring long-term plant health and longevity.
* **Embedded Control Integration:** Utilize custom sensor logic and hardware control loops for seamless execution.

---

## Tech Stack & Hardware Components

* **Microcontroller:** Arduino Platform
* **Sensors:** Soil Moisture Sensor Module
* **Actuators:** Submersible Water Pump / Solenoid Valve & Relay Module
* **Programming Languages:** Embedded C / C++ (Arduino Framework)
* **Power Supply:** Standard DC Power Module / Battery Pack

---

## System Architecture & Workflow

1. **Moisture Sensing:** Soil moisture sensors embedded in the soil take continuous analog readings.
2. **Threshold Calibration:** The Arduino compares real-time sensor readings against pre-calibrated moisture thresholds.
3. **Automated Triggering:**
   * **Moisture < Threshold:** Arduino activates the relay module to turn on the water pump.
   * **Moisture ≥ Optimal Level:** The pump automatically shuts off to avoid over-saturation.
4. **Monitoring Loop:** The control loop runs continuously with standard delayed sampling to protect sensor electrodes from oxidation.

---

## Key Contributions & Roles

### My Contributions
* **Arduino Firmware Development:** Authored and debugged the control logic, sensor calibration routines, and relay control algorithms.
* **Presentation & Documentation:** Delivered the final presentation detailing project methodology, system architecture, and empirical findings.

### Project Team
* **Ahmed Hasan** (Arduino Firmware Lead & Presenter)
* **Ahmed Abdul-Kareem**
* **Ahmed Yosry**
* **Ahmed M. Walid**
* **Ahmed Gamal**

### Academic Supervision
* **Prof. Amer Abdelfattah** — Course Instructor & Project Supervisor
