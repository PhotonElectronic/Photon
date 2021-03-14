/*
  Servo Motor
  
  Birçok alanda kullanılan 1 birim devir/dakikalık hız bölgelerinin altında bile kararlı çalışabilen, 
  hız ve moment kontrolü yapan servo motorların arduino ile çalışma uygulaması yapıldı.

  Düzenleme 27.12.2020 - Uğur Koyun
   
  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board

*/

//Servo motor kütüphanesi eklendi.
#include <Servo.h>

//Kütüphane için servo_motor adında bir değişken tanımlandı.
Servo servo_motor;  

void setup() {
  //3 numaralı pin servo motorumuza etki edeceğimiz pin olarak tanımlandı.
  servo_motor.attach(3); 
}

void loop() {
  //Servo motor konumunu belirtilen değere göre ayarlar
  servo_motor.write(0);                  
  delay(2000);  
  servo_motor.write(180);
  delay(2000);                         
}
