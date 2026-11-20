# ⛽ Fuel Station Monitoring using KiwisIoT

An IoT-based fuel station monitoring project designed to monitor environmental conditions remotely using ESP8266 and the KiwisIoT platform.

## 🌟 About the Project

Fuel stations require proper monitoring to maintain safe and reliable operating environments. Monitoring environmental conditions can help operators observe changes and take action when necessary.

This project explores IoT-based monitoring using a microcontroller connected to sensors. The collected data can be transmitted through Wi-Fi to the KiwisIoT platform, allowing users to monitor the system remotely through an online dashboard.

The goal is to make monitoring easier by connecting hardware with an IoT platform and displaying collected information in real time.

## 🛠️ Hardware Components

- NodeMCU ESP8266
- Sensors used in the project
- Jumper Wires
- USB Cable / Power Supply

## 🔌 Circuit Connections

Connect the sensors to the NodeMCU ESP8266 according to the pin configuration used in the project.

The ESP8266 acts as the main controller, collecting sensor data and transmitting the information to KiwisIoT through Wi-Fi.

## 🚀 Features

- IoT-based fuel station monitoring
- Wi-Fi connectivity
- Remote monitoring through KiwisIoT
- Online dashboard visualization
- Real-time sensor data transmission
- Expandable monitoring system

## 📊 KiwisIoT Dashboard

The KiwisIoT platform provides an online dashboard to visualize the data collected by the connected hardware.

The ESP8266 sends sensor readings to the configured KiwisIoT channels, allowing users to access monitoring information remotely.

The dashboard can be customized with widgets to display sensor values, status information, and other monitoring data supported by the project.

## 💻 Software Used

- Arduino IDE
- ESP8266 Board Package
- Required Sensor Libraries
- KiwisIoT Arduino Library

## ⚙️ Working Principle

The NodeMCU ESP8266 acts as the central controller of the monitoring system. It collects information from the connected sensors and processes the readings using the programmed logic.

After processing the data, the ESP8266 connects to the Wi-Fi network and sends the collected information to the KiwisIoT platform.

Users can view the transmitted data through the KiwisIoT dashboard, making remote monitoring possible without directly accessing the hardware.

## 📖 Project Tutorial

Explore the complete project tutorial on Hackster.io:

🔗 https://www.hackster.io/kirusokumar/fuel-station-monitoring-using-kiwisiot-eeabc6

## 🌐 Explore KiwisIoT

If you're interested in developing IoT projects and connecting hardware with online dashboards, you can explore the KiwisIoT platform and its resources.

- 🌍 **KiwisIoT Platform:** https://www.kiwisiot.in/
- 📚 **Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- 💡 **Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## 👨‍💻 About the Author

I enjoy building IoT projects, experimenting with sensors and microcontrollers, and exploring how connected devices can solve real-world problems.

I share my projects to help others learn, experiment, and develop their own IoT applications. Feel free to explore the project and its resources if you're also interested in learning IoT.

---

*Built with curiosity, sensors, and IoT.*