//
// Created by CARLOS on 20/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_VIEW_H
#define EJERCICIO_POLIMORFISMO_VIEW_H



#include <iostream>
#include <vector>
#include <Programa.h>

using std::cin;
using std::cout;
using std::vector;


class View {
private:
    Programa * programaObj;
public:
    View();
    ~View();
    int menu();
    void principal();
    void dibujarFigura();
    void agregarFigura();


};


#endif //EJERCICIO_POLIMORFISMO_VIEW_H
