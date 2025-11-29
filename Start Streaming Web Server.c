// Start streaming web server
startCameraServer();
}
void loop() {
metalstate=digitalRead(metal);
delay(100);
if(metalstate==HIGH)
{
Serial.println("Stop-METAL DETECTED");
digitalWrite(MOTOR_1_PIN_1, 0);
digitalWrite(MOTOR_1_PIN_2, 0);
digitalWrite(MOTOR_2_PIN_1, 0);
digitalWrite(MOTOR_2_PIN_2, 0);

}
}