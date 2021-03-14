/*
   HC-06 Bluetooth Modülü

   HC-06 Bluetooth modülü kullanılarak bluetooth destekli cihazlarla haberleşme uygulaması.

  Düzenleme 26.01.2021 - Yusuf Enes TATAR

  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Gamma-Board

*/

//Yazılımsal seri haberleşme kütüphanesi aktif edildi.
#include <SoftwareSerial.h>

SoftwareSerial bluetooth_com(7, 8); // RX,TX

void setup()
{
  //Seri haberleşme protokolü başlatıldı.
  Serial.begin(9600);
  //Yazılımsal seri haberleşme protokolü başlatıldı.
  bluetooth_com.begin(9600);
}

void loop()
{
  //Bluetooth modülünün durumu kontrol ediliyor.
  if (bluetooth_com.available())
  {
    //Veriler char türündeki data değişkenine aktarılıyor.
    char data = bluetooth_com.read();
    //data değişkenine aktarılan veriler seri monitörde gösteriliyor.
    Serial.println(data);
  }
}
