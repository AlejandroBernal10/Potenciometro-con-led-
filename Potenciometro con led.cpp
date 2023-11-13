int potPin = 2; // seleccionar el pin de entrada analógico para el potenciómetro
int ledPin = 13; // seleccionar el pin de salida digital para el LED
int val = 0; // variable para almacenar el valor capturado desde el sensor
void setup() {
pinMode(ledPin, OUTPUT); // declara el ledPin en modo salida
}
void loop() {
val = analogRead(potPin); // lee el valor del sensor
digitalWrite(ledPin, HIGH); // enciende LED
delay(val); // detiene el programa por un tiempo “val”
digitalWrite(ledPin, LOW); // apaga el LED
delay(val); // detiene el programa por un tiempo “val”
}