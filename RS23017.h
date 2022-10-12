#include "RS23017DFS.h"
#include "Arduino.h"
#define uint_8t char

class Mcp23017{
    private:
    char Geraeteadresse;
    public:
    Mcp23017(char Gadresse);          // Vorbereitung Konstruktor
    void writeRegister(char address, char value);
    
    char readRegister(char address);
    void bitsetzen(char Port, char Bit);
    void bitloeschen(char Port, char Bit);
    };