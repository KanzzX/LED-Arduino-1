#include <Arduino.h>

//Deklarasi pin LED
//Mengdeklarasikan variabel konstanta integer untuk menyimpan nomor pin LED
int ledMerah = 8;
int ledKuning = 9;
int ledHijau = 10;


void setup() {
  // Mengatur pin-pin yang di hubungkan ke LED sebagai output.
  // Hal ini berarti pin-pin tersebut dapat digunakan untuk mengendalikan LED
Serial.begin(9600);
pinMode(ledMerah, OUTPUT);
pinMode(ledKuning, OUTPUT);
pinMode(ledHijau, OUTPUT);
}

void loop() {
  // LED Merah
  // Menyalakan LED Merah selama 5 detik, kemudian mematikannya
digitalWrite(ledMerah, HIGH);
delay(6000);
digitalWrite(ledMerah, LOW);

// LED Merah
  // Menyalakan LED Kuning selama 1 detik, kemudian mematikannya
digitalWrite(ledKuning, HIGH);
delay(500);
digitalWrite(ledKuning, LOW);

// LED Merah
  // Menyalakan LED Hijau selama 5 detik, kemudian mematikannya
digitalWrite(ledHijau, HIGH);
delay(4000);
digitalWrite(ledHijau, LOW);

// LED Kuning
  // Menyalakan LED Kuning selama 1 detik, kemudian mematikannya
digitalWrite(ledKuning, HIGH);
delay(500);
digitalWrite(ledKuning, LOW);
}
