//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_CUADRADO_H
#define EJERCICIO_POLIMORFISMO_CUADRADO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;

class Cuadrado: public FiguraGeometrica{
private:
    float lado;
public:
    Cuadrado();
    Cuadrado(float longitudLado);
    virtual ~Cuadrado() = default;

    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_CUADRADO_H
