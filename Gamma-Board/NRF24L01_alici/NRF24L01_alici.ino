/*
   NRF24L01 Rf haberleşme Sensörü

   Rf haberleşme sensörü kullanılarak yapılan haberleşme uygulamasının alıcı kodu.

   Düzenleme 26.01.2021 - Yusuf Enes TATAR

   Bu örnek kod PHOTON TECHNOLOGY tarafından kamuya sunulmuştur.

   https://github.com/PhotonTechnologyCodeSpace/Gamma-Board


 * SCK  >> 13
 * MISO >> 12
 * MOSI >> 11
 * CSN  >> 10
 * CE   >> 9
 */
 
//SPI kütüphanesi eklendi.
#include  <SPI.h> 
//nRF24L01 kütüphanesi eklendi.
#include "nRF24L01.h"
//RF24 kütüphanesi eklendi.
#include "RF24.h"     

//mesaj isminde bir dizi tanımlandı.
int mesaj[1];  
//Kütüphane tarafından kullanılacak pinler tanımlandı.
RF24 verici(9,10);   
//Modüllerin haberleşeceği kanal tanımlandı
const uint64_t kanal = 0xE8E8F0F0E1LL;

void setup(void){
 Serial.begin(9600); 
 alici.begin();
 alici.openReadingPipe(1,kanal);
 alici.startListening();
 }

void loop(void){
 if (alici.available())
 {
   bool done = false;    
   while (!done)
   {
     done = alici.read(mesaj, 1);  
     Serial.println(mesaj[0]);
   }
 }
 }
