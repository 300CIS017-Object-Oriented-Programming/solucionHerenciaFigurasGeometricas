//
// Created by sebas on 3/27/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_ROMBO_H
#define EJERCICIO_POLIMORFISMO_ROMBO_H

#include "FiguraGeometrica.h"

class Rombo: public FiguraGeometrica {
private:
    float lado;
    float diagonalMayor;
    float diagonalMenor;
public:
    Rombo();
    Rombo(float lado, float diagonalMayor, float diagonalMenor);
    virtual ~Rombo() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_ROMBO_H
