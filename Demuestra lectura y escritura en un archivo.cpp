//*********************************************************
//  archiv06.cpp
//  Demuestra lectura y escritura en un archivo
//  ©1999, Jaime Virgilio Gómez Negrete
//*********************************************************

#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    char letra;
    fstream letras("Letras.txt", ios::in|ios::out);

    letras.seekg(7, ios::beg);   // obtiene la letra H
    letra=letras.get();
    letras.seekp(0, ios::end);
    letras << letra;  // coloca la letra al final

    letras.seekg(-13, ios::end); // obtiene la letra O
    letra = letras.get();
    letras.seekp(0, ios::end);
    letras << letra;

    letras.seekg(-17, ios::end); // obtiene la letra L
    letra = letras.get();
    letras.seekp(0, ios::end);
    letras << letra;

    letras.seekg(0, ios::beg);   // obtiene la letra A
    letra = letras.get();
    letras.seekp(0, ios::end);
    letras << letra;

    letras.seekg(-4, ios::end);
    while(!letras.eof())
    cout.put((char)letras.get());

    letras.close();

    return 0;
}