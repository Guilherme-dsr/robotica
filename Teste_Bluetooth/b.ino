#include <SoftwareSerial.h>
SoftwareSerial bluetooth(10, 11);
void setup() {
  Serial.begin(19200); //INICIALIZA A SERIAL
  bluetooth.begin(19200); 

}

void loop() {
    if(bluetooth.available()) //SE O BLUETOOTH ESTIVER HABILITADO, FAZ
      Serial.write(bluetooth.read());
    if(bluetooth.available()) //SE O BLUETOOTH ESTIVER HABILITADO, FAZ
     bluetooth.write(Serial.read());

}
