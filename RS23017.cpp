#include "RS23017.h"
#include "Wire.h"
#include "Arduino.h"

Mcp23017::Mcp23017(char Gadresse){
    Geraeteadresse = Gadresse;
}
void Mcp23017::writeRegister(char address, char value) {
    Wire.beginTransmission(Geraeteadresse);
    //Serial.println(Geraeteadresse);
    Wire.write(address);
    Wire.write(value);
    Wire.endTransmission();
 }
char Mcp23017::readRegister(char address) {
    Wire.beginTransmission(Geraeteadresse);
    Wire.write(address);
    Wire.endTransmission();
    Wire.requestFrom(Geraeteadresse, 1);
    return Wire.read();
}
void Mcp23017::bitsetzen(char Port, char Bit) {
   
 
    char Wert;
    Wert = readRegister(Port);
    char i = Bit;
    double k = i;
    double h = pow(2, k);
    char kk = h;
    char kkk = Wert | kk;
    writeRegister(Port,kkk);





}

void Mcp23017::bitloeschen(char Port, char Bit) {
     char Wert;
    Wert = readRegister(Port);
    char i = Bit;
    double k = i;
    double h = pow(2, k);
    char kk = h;
    char ppp = 255-kk;
    char kkk = Wert & ppp;
    writeRegister(Port,kkk);

}

