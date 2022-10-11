//
// Created by sebas on 3/27/2022.
//

#include "Rombo.h"

Rombo::Rombo() {
    lado=0;
    diagonalMayor=0;
    diagonalMenor=0;
    nombreFigura = "Rombo";
}

Rombo::Rombo(float lado, float diagonalMayor, float diagonalMenor): Rombo() {
    this->lado = lado;
    this->diagonalMayor = diagonalMayor;
    this->diagonalMenor = diagonalMenor;
}

void Rombo::dibujarFigura() {
    cout << nombreFigura;
    cout << "\n";
    int diagonal=3;
    int longitud = 2 * diagonal - 2;
    for (int i = 0; i < diagonal; i++) {
        for (int j = 0; j < longitud; j++)
            cout << " ";
        longitud = longitud - 1;

        for (int j = 0; j <= i; j++) {
            cout << " *";
        }
        cout << "\n";
    }
    for (int i=diagonal; i>=0; i--)
    {
        for (int j=longitud; j>0; j--)
            cout <<" ";
        longitud = longitud + 1;

        for (int j=i; j>=0; j-- )
        {
            cout << " *";
        }
        cout << "\n";
    }
}

float Rombo::calcularArea(){
    area = (diagonalMenor * diagonalMayor) / 2;
    return area;
}

float Rombo::calcularPerimetro(){
    perimetro = 4 * lado;
    return perimetro;
}