//
// Created by CARLOS on 20/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_RECTANGULO_H
#define EJERCICIO_POLIMORFISMO_RECTANGULO_H

#include "FiguraGeometrica.h"

class Rectangulo: public FiguraGeometrica{
private:
    float base;
    float altura;
public:
    Rectangulo();
    virtual ~Rectangulo() = default;
    Rectangulo(float base, float altura);
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_RECTANGULO_H
