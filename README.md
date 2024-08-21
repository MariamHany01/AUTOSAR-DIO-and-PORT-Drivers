
**Project Title: TM4C ARM-based Microcontroller autosar Drivers and Simple RTOS Implementation**

**Description:**
This project focuses on implementing AUTOSAR-compliant drivers for TM4C ARM-based Microcontrollers to manage GPIOs and control LEDs using a simple Real-Time Operating System (RTOS). Two main drivers are utilized: the PORT driver for GPIO initialization and the DIO driver for GPIO control in Digital Input/Output (DIO) mode. The RTOS facilitates task management for toggling an LED when a button is pressed.

**Components:**
1. **PORT Driver (AUTOSAR Compliant):** Initializes GPIOs in any mode.
2. **DIO Driver (AUTOSAR Compliant):** Controls GPIOs in DIO mode.
3. **Simple RTOS:** Manages tasks for toggling LEDs upon button press.

**Task Description:**
The project is subdivided into tasks, each with specific responsibilities:
1. **Initialization Task:** Initializes the PORT driver to set up GPIOs and initializes the DIO driver for GPIO control.
2. **Button Monitoring Task:** Monitors the state of the button and triggers an event upon button press.
3. **LED Toggling Task:** Toggles the LED upon receiving the event triggered by the button press.

