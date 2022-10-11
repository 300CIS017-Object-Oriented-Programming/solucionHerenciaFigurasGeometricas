//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_FIGURAGEOMETRICA_H
#define EJERCICIO_POLIMORFISMO_FIGURAGEOMETRICA_H

#include <iostream>
#include <vector>
#include <cstdlib>

using std::cin;
using std::cout;
using std::vector;
using std::string;

class FiguraGeometrica {
protected:
    float area;
    float perimetro;
    string nombreFigura;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica() = default;
    void dibujarFigura(int color);

    // Son metodos abstractos pq la clase Padre no tiene una implementación concreta
    virtual void dibujarFigura() = 0;
    virtual float calcularArea() = 0;
    virtual float calcularPerimetro() = 0;

    float getArea();

    float getPerimetro();

    const string &getNombreFigura() const;

};


#endif //EJERCICIO_POLIMORFISMO_FIGURAGEOMETRICA_H
