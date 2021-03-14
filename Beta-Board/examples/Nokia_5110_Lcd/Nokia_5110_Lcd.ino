/*
  Nokia 5110 LCD

  Nokia 5110 ekranı kullanılarak ekrana yazı yazma uygulaması yapıldı.

  Düzenleme 27.12.2020 - Uğur Koyun
  Düzenleme 09.01.2021 - Yusuf Enes TATAR 
  
  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board

*/

//Nokia 5110 kütüphanesi eklendi.
#include "Nokia_5110.h"

//Nokia 5110 pinleri için tanımlamalar yapıldı
#define RST 11
#define CE 12
#define DC 10
#define DIN 9
#define CLK 8

//Nokia 5110 kütüphanesi için lcd adında değişken oluşturuldu.
Nokia_5110 lcd = Nokia_5110(RST, CE, DC, DIN, CLK);

void setup() {
    //Nokia 5110 için kontrast ayarı yapıldı.
    lcd.setContrast(60); 
}

void loop() {
    //Ekran kursoru 10.satır 2.sütuna getirildi.
    lcd.setCursor(10, 2);
    //Ekrana Beta Board yazdırıldı.
    lcd.print("Beta Board");
    //Bekleme
    delay(1000);
    //Ekran temizlendi
    lcd.clear();
  }
