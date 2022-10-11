//
// Created by CARLOS on 17/03/2022.
//

#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica() {
    area = 0;
    perimetro = 0;
}

void FiguraGeometrica::dibujarFigura(int color){
    switch (color) {
        case 1:
            system("Color 04");
            break;
        case 2:
            system("Color 03");
            break;
        case 3:
            system("Color 02");
            break;
        case 4:
            system("Color 05");
            break;
        case 5:
            system("Color 06");
            break;
        default:
            system("Color 07");
            break;
    }
    dibujarFigura(); // Hace el llamado al metodo abstracto para que se llame la implementacion especifica de las subclases.
}

float FiguraGeometrica::getArea()  {
    if (area == 0) {
        // Si no se ha definido se llama el método que lo calcula. Esto va a llamar al método específico de cada clase.
        calcularArea();
    }
    return area;
}

float FiguraGeometrica::getPerimetro() {
    if (perimetro == 0) {
        // Si no se ha definido se llama el metodo que lo calcula
        calcularPerimetro();
    }
    return perimetro;
}

const string &FiguraGeometrica::getNombreFigura() const {
    return nombreFigura;
}
