/*
   HC-SR04 Ultrasonik Mesafe Sensörü

   HC-SR04 Ultrasonik mesafe sensörü kullanılarak çeşitli mesafe ölçüm uygulaması.

   Düzenleme 26.01.2021 - Yusuf Enes TATAR

   Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

   https://github.com/PhotonTechnologyCodeSpace/Gamma-Board

*/
//HC-SR04 Modülünün kolay kullanımı için "NewPing.h" kütüphanesi eklendi.
#include "NewPing.h"
#define trig 3             //hc-sr04 modülünün trig bacağı 3.pine tanımlandı.
#define echo 4            // hc-sr04 modülünün echo bacağı 4.pine tanımlandı.
#define max_mesafe 400   //  maksimum mesafe modülün desteklediği 400 cm (4m) olarak tanımlandı.

//NewPing kütüphanesi için sonar adında bir değişken oluşturup değişkenin içine yukarıda tanımlanan sabitler eklendi.
NewPing sonar(trig, echo, max_mesafe);

//float türünde mesafe değişkeni tanımlandı.
float  mesafe;

void setup() 
{
  //Seri haberleşme protokolü başlatıldı.
  Serial.begin(9600);
}

void loop() 
{
  //NewPing kütüphanesinin yaptığı ölçümler mesafe değişkenine aktarılıyor.
  mesafe = sonar.ping_cm();
  
  Serial.print("mesafe = ");  

  //mesafe değişkeninin belirlenen aralıkda olup olmadığı kontrol ediliyor ve buna göre seri monitörde gösteriliyor.
  if (mesafe >= 400 || mesafe <= 2) 
  {
    Serial.println("Aralığın Dışında !!!");
  }
  else 
  {
    Serial.print(mesafe);
    Serial.println(" cm");
  }
  delay(500);
}
