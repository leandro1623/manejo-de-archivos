//***********************************************
//  letras.cpp
//  Genera un abecedario
//  ©1999, Jaime Virgilio Gómez Negrete
//***********************************************

#include <fstream>
using namespace std;

int main()
{
    ofstream archivo("Letras.txt");

    for(char letra='A'; letra <='Z'; letra++)
    archivo << letra;
    archivo.close();

    return 0;
} 