//
// Created by CARLOS on 17/03/2022.
//

#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    lado = 0;
    nombreFigura = "Cuadrado";
}

Cuadrado::Cuadrado(float longitudLado):Cuadrado() {
    this->lado = longitudLado;
}

void Cuadrado::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i == 0 || j == 0 || i == 5 || j == 5){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Cuadrado::calcularArea() {
    area = lado * lado;
    return area;
}

float Cuadrado::calcularPerimetro() {
    perimetro = lado * 4;
    return perimetro;
}