//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_CIRCULO_H
#define EJERCICIO_POLIMORFISMO_CIRCULO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Circulo: public FiguraGeometrica {
private:
    float radio;
public:
    Circulo();
    Circulo(float radio);
    virtual ~Circulo() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_CIRCULO_H
