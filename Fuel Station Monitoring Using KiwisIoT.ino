#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// HC-SR04 connections
#define TRIG_PIN D5
#define ECHO_PIN D6

// Storage container height in cm
const float BIN_HEIGHT = 30.0;

// Measurement variables
float distance;
float stockPercentage;
unsigned long duration;

unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 2000;

float measureDistance()
{
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000UL);

  if (duration == 0)
  {
    return -1;
  }

  return (duration * 0.0343) / 2.0;
}

void setup()
{
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  kiwisiot.begin();

  Serial.println("Smart Inventory Monitoring Started");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    distance = measureDistance();

    if (distance >= 0 && distance <= BIN_HEIGHT)
    {
      // Calculate occupied stock height
      float occupiedHeight = BIN_HEIGHT - distance;

      // Calculate stock percentage
      stockPercentage =
          (occupiedHeight / BIN_HEIGHT) * 100.0;

      stockPercentage = constrain(
          stockPercentage, 0, 100
      );

      Serial.print("Distance: ");
      Serial.print(distance);
      Serial.println(" cm");

      Serial.print("Stock Level: ");
      Serial.print(stockPercentage);
      Serial.println(" %");

      String status =
          (stockPercentage <= 20.0)
          ? "LOW STOCK"
          : "NORMAL";

      Serial.print("Inventory Status: ");
      Serial.println(status);

      // Send data to KiwisIoT
      kiwisiot.send("0", String(distance, 2));
      kiwisiot.send("1", String(stockPercentage, 1));
      kiwisiot.send("2", status);
    }
    else
    {
      Serial.println("Invalid Distance Reading");
    }
  }
}