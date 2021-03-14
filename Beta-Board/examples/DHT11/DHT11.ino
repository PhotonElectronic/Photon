/*
  DHT11

  DHT11 sıcaklık ve nem sensörü kullanılarak yapılan arduino uygulaması.

  Düzenleme 27.12.2020 - Uğur KOYUN
  Düzenleme 09.01.2021 - Yusuf Enes TATAR

  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board

*/

//DHT11 kütüphanesi dahil edildi.
#include <SimpleDHT.h>
//DHT11 sensörü için 2 numaralı pin tanımlandı.
int pinDHT11 = 2;
//Kütüphane için verilerin tutulacağı dht11 değişkeni tanımlandı.
SimpleDHT11 dht11(pinDHT11);

void setup() {
  //Seri haberleşme başlatıldı.
  Serial.begin(9600);
}

void loop() {
  // Çalışma Başlatılıyor
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  byte temperature = 0;                // sıcaklık verimiz için başlangıçda değeri 0 olan temperature değişkeni tanımlandı.
  byte humidity = 0;                  //  nem verimiz için başlangıçda değeri 0 olan humidity değişkeni tanımlandı.
  int err = SimpleDHTErrSuccess;     //   Başlangıçta DHT ile ilgili bir hata olursa bir hata değeri döndürülecek.

  //Hata Bloğu döndürülen değere göre işlem yapacak
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  /********************************************************/
  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, "); //Okunan sıcaklık değerlerini serial monitör ile ekranda gösteren kod paraçası.
  Serial.print((int)humidity); Serial.println(" H");    //Okunan nem değerlerini serial monitör ile ekranda gösteren kod paraçası.
  
  //Bekleme
  delay(1500);
}
