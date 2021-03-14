/*
  RGB Led

  Düzenleme 27.12.2020 - Uğur Koyun
  Düzenleme 09.01.2024 - Yusuf Enes TATAR
   
  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board

*/

// Ledler için pin tanımlamaları yapıldı.
#define kirmizi 4
#define yesil 5
#define mavi 6

void setup() {
  //Bütüün led pinleri çıkış olarak ayarlandı
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);
}

void loop() {
  //Tüm ledlerin 1 sn arayla yanıp sönmesi için bir kod bloğu oluşturuldu.
  digitalWrite(kirmizi, HIGH);
  digitalWrite(mavi, LOW);
  delay(1000);
  digitalWrite(kirmizi, LOW);
  digitalWrite(yesil, HIGH);
  delay(1000);
  digitalWrite(yesil, LOW);
  digitalWrite(mavi, HIGH);
  delay(1000);
}
