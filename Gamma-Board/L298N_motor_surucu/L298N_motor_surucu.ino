/*
   L298N Motor Sürücü

   L298N Motor sürücü kullanılarak yapılan bir h köprüsü test uygulamasıdır.Bu kod ile motorlar
   önce 3 saniye saat yönünde dönecek, 3 saniye duracak ve 3 saniye saat yönünün tersine dönecektir.

  Düzenleme 26.01.2021 - Yusuf Enes TATAR

  Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Gamma-Board

*/

//Motor bağlantı tanımlamaları yapıldı
const int Enable_A = 5;
const int Enable_B = 6;
const int input_1 = A0;
const int input_2 = A1;
const int input_3 = A2;
const int input_4 = A3;

void setup()
{
//moturun tüm sinyal bacakları çıkış olarak ayarlandı.
pinMode(Enable_A, OUTPUT);
pinMode(Enable_B, OUTPUT);
pinMode(input_1, OUTPUT);
pinMode(input_2, OUTPUT);
pinMode(input_3, OUTPUT);
pinMode(input_4, OUTPUT);
}
void loop()
{
//Enable pinlerine HIGH sinyal seviyesi uygulandı.
digitalWrite(Enable_A, HIGH);
digitalWrite(Enable_B, HIGH);

//Motorlar 3 saniye saat yönüne hareket ediyor.
digitalWrite(input_1, HIGH);
digitalWrite(input_2, LOW);
digitalWrite(input_3 , HIGH);
digitalWrite(input_4, LOW);
delay(3000);

//Motorlar 3 saniye bekliyor.
digitalWrite(Enable_A, LOW);
digitalWrite(Enable_B, LOW);
delay(3000);

//Enable pinlerine HIGH sinyal seviyesi uygulandı.
digitalWrite(Enable_A, HIGH);
digitalWrite(Enable_B, HIGH);

//Motorlar 3 saniye saat yönünün tersine hareket ediyor.
digitalWrite(input_1, LOW);
digitalWrite(input_2, HIGH);
digitalWrite(input_3 , LOW);
digitalWrite(input_4, HIGH);
delay(3000);
//Motorlar 3 saniye bekliyor.
digitalWrite(Enable_A, LOW);
digitalWrite(Enable_B, LOW);
delay(3000);
}
