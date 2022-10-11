//
// Created by lufe0 on 5/10/2022.
//

#include "Programa.h"

Programa::Programa(){
   inicializarFiguras();
}

void Programa::inicializarFiguras(){
    vectorFiguras.push_back(new Cuadrado(10));
    vectorFiguras.push_back(new Circulo(5));
    vectorFiguras.push_back(new Rectangulo(10,20));
    vectorFiguras.push_back(new Rombo(5,5,5));
}

void Programa::agregarFigura(int lado){
    vectorFiguras.push_back(new Cuadrado(lado));
}

void Programa::agregarFigura(float radio){
    vectorFiguras.push_back(new Circulo(radio));
}

void Programa::agregarFigura(int base, int altura){
    vectorFiguras.push_back(new Rectangulo(base, altura));
}

void Programa::agregarFigura(int lado, int diagonalMayor,int diagonalMenor){
    vectorFiguras.push_back(new Rombo(lado, diagonalMayor, diagonalMenor));
}

void Programa::mostrarAreaFigura() {
    float area;
    for(auto & figura : vectorFiguras){
        area = figura->calcularArea();
        cout << "El area del " <<  figura->getNombreFigura() << " es: " << area << "\n";
    }
    cout << "\n";
}

void Programa::dibujarFiguras(int color) {
    //Recorre el vector y llama al metodo de cada figura con el color
    for (auto & figura : vectorFiguras) {
        figura->dibujarFigura(color);
    }
    system("Color 07"); // Color negro
}
void Programa::dibujarFiguras() {
    //Recorre el vector y llama al metodo de cada figura
    for (auto & figura : vectorFiguras) {
        figura->dibujarFigura();
    }
    cout << "\n";
}

void Programa::mostrarPerimetroFigura() {
    float perimetro;
    for(auto & figura : vectorFiguras){
        perimetro = figura->calcularPerimetro();
        cout << "El area del " <<  figura->getNombreFigura() << " es: " << perimetro << "\n";
    }
    cout << "\n";
}

float Programa::calcularSumaAreas() {
    float suma = 0;
    for(auto & figura : vectorFiguras){
        suma += figura->getArea();
    }
    return suma;
}