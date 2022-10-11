//
// Created by CARLOS on 20/03/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {
    base = 0;
    altura = 0;
    nombreFigura = "Rectangulo";
}

Rectangulo::Rectangulo(float base, float altura):Rectangulo() {
    this->altura = altura;
    this->base = base;
}

void Rectangulo::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 15; j++){
            if(i == 0 || i == 3 || j == 0 || j == 14){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Rectangulo::calcularArea() {
    area = base * altura;
    return area;
}

float Rectangulo::calcularPerimetro() {
    perimetro = (base * 2) + (altura * 2);
    return perimetro;
}