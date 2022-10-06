//
// Created by lufe0 on 5/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_PROGRAMA_H
#define EJERCICIO_POLIMORFISMO_PROGRAMA_H

#include "../Model/Circulo.h"
#include "../Model/Cuadrado.h"
#include "../Model/Rectangulo.h"
#include "../Model/Rombo.h"
#include "../Model/FiguraGeometrica.h"

class Programa {
private:
    vector<FiguraGeometrica*> vectorFiguras;

    void inicializarFiguras();
public:
    Programa();

    void agregarFigura(int lado);
    void agregarFigura(float radio);
    void agregarFigura(int base, int altura);
    void agregarFigura(int lado, int diagonalMayor,int diagonalMenor);
    void dibujarFiguras();
    void dibujarFiguras(int color); //sobrecarga del metodo para dibujar con colores
    void mostrarAreaFigura();
    void mostrarPerimetroFigura();
    float calcularSumaAreas();
};


#endif //EJERCICIO_POLIMORFISMO_PROGRAMA_H
