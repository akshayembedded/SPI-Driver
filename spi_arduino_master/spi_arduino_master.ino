 #include <SPI.h>
void setup() {
     pinMode(9,OUTPUT);
  digitalWrite(9,1);//
    SPI.begin();
   Serial.begin(9600);
  delay(1000);

  
  
}

void loop() {
   SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE3));
  digitalWrite(9,0);
  
  Serial.print(SPI.transfer(0x03));

    digitalWrite(9,1);
  // put your main code here, to run repeatedly:

}
