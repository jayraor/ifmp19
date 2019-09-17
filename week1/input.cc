/*
Raul Rao, Week 0, input.cc

Beginning more "sophistication"

*/

#include <iostream>

int main(void) {
    // get cute user interface
    std::cout << "pls, state your favourite number: ";
    int fav = 0;
    // speichert den Wert direkt in der variable fav, der in der Kommandozeile eingegeben wird
    std::cin >> fav;
    std::cout << "oh, your favourite number is " << fav<<std::endl;
    return 0;
}