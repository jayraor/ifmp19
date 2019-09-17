/*
Raul Rao, Week 0, var.cc

Beginning more "sophistication"

*/

#include <iostream>

int main(void) {
    // Wir werden hier einfach mal ganz viele Datentypen deklarieren und ausgeben
    
    // Ganzzahlen (short, long, long existieren auch in ihrer unsigned Version)
    int i = -21;
    unsigned int ui = 2;
    long l = 202002;
    long long ll = 20202002002;
    short s = 13;
    signed sgn = -5;
    // Character (Bemerke das einfache Anführungszzeichen)
    char c = 'd';
    std::string str = "hello, world";

    // "Kommazahlen"
    float f = 7.2f;
    double d = 7.2;
    long double ld = 7.28181;
    
    // const wird später noch genauer besprochen (zunächst aber nur Konstanten)
    const int ci = 3;
    // ci lönnen wir nicht mehr ändern 
    // const existiert mit allen Datentypen und auch vielen vielen anderen Dingen, die später besprochen werden 
    return 0;
}