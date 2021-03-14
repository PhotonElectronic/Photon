/*
   NRF24L01 Rf haberleşme Sensörü

   Rf haberleşme sensörü kullanılarak yapılan haberleşme uygulamasının verici kodu.

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

void setup(void)
{
 //NRF24L01 modülü başlatıldı.
 verici.begin();        
 //Kanal id sı tanımlanıyor.
 verici.openWritingPipe(kanal);  
}

void loop(void)
{
 //1 sn arayla 123 değeri yollanıyor.
 mesaj[0] = 123; 
 verici.write(mesaj, 1);   
 delay(1000;)
 }
 }
