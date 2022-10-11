//
// Created by CARLOS on 17/03/2022.
//

#include "Circulo.h"

Circulo::Circulo() {
    radio = 0;
    nombreFigura = "Circulo";
}

// Llama al constructor x defecto primero
Circulo::Circulo(float radio): Circulo() {
    this->radio = radio;
}

void Circulo::dibujarFigura() {
    cout << nombreFigura;
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            if(pow(j - 5, 2.0) + pow(i - 5, 2.0) <= pow(5, 2.0)){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Circulo::calcularArea() {
    area = M_PI * pow(radio, 2.0);
    return area;
}

float Circulo::calcularPerimetro() {
    perimetro = 2 * M_PI * radio;
    return perimetro;
}