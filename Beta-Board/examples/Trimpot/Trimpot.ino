/*
  Trimpot
  
  Analog giriş pinine bağladığımız trimpot ile direnç değeri okuma uygulaması yapıldı.
  
  Düzenleme 27.12.2020 - Uğur Koyun
  Düzenleme 09.01.2021 - Yusuf Enes TATAR
   
  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board
  
*/

//Trimpot verileri Analog A1 pininden okunuyor.
int sensorPin = A1;
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  //SensorValue değişkenine okunan değerler kaydediliyor.
  sensorValue = analogRead(sensorPin);
  //Serial monitörde okunan veriler gösteriliyor.
  Serial.println(sensorValue);
  //Bekleme
  delay(1000);
}
