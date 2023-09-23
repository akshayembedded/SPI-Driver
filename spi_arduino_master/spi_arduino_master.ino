 #include <SPI.h>
void setup() {
     pinMode(9,OUTPUT);//D9 used for chip selection
  digitalWrite(9,1);// to deselect device
    SPI.begin();//MISO input MOSI output
   Serial.begin(9600);
  delay(1000);
}

void loop() {
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE3));//CPOL=1 CPHA=1
  digitalWrite(9,0);//slave is selected
  Serial.print(SPI.transfer(0x03));
  digitalWrite(9,1);
 delay(1000);
}
