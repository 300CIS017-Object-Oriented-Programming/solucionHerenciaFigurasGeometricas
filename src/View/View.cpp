//
// Created by CARLOS on 20/03/2022.
//

#include "View.h"

// Constructor
View::View(){
    programaObj = new Programa();
}

void View::agregarFigura() {
    int opcion;
    float longitudLado, base, altura, radio, lado, diagonalMenor, diagonalMayor;
    cout << "======== Figuras disponibles ========\n";
    cout << "1. Cuadrado\n";
    cout << "2. Circulo\n";
    cout << "3. Rectangulo\n";
    cout << "4. Rombo\n";
    cout << "Indique que figura desea agregar:\n";
    cin >> opcion;
    switch (opcion){
        case 1: {
            cout << "Ingrese la longitud de un lado del cuadrado:\n";
            cin >> lado;
            programaObj->agregarFigura((int)lado); // Importante el casteo para que se llame al metodo correcto
            break;
        }
        case 2: {
            cout << "Ingrese el radio del circulo:\n";
            cin >> radio;
            programaObj->agregarFigura((float)radio);// Importante el casteo para que se llame al metodo correcto
            break;
        }
        case 3:{
            cout << "Ingrese la base del rectangulo:\n";
            cin >> base;
            cout << "Ingrese la altura del rectangulo:\n";
            cin >> altura;
            programaObj->agregarFigura(base, altura);// Importante el casteo para que se llame al metodo correcto
        }
        case 4:{
            cout << "Ingrese el lado del rombo:\n";
            cin >> lado;
            cout << "Ingrese la diagonal mayor del rombo:\n";
            cin >> diagonalMayor;
            cout << "Ingrese la diagonal menor del rombo:\n";
            cin >> diagonalMenor;
            programaObj->agregarFigura(lado, diagonalMayor,diagonalMenor);// Importante el casteo para que se llame al metodo correcto
        }
    }
}

// Destructor
View::~View(){
    // Liberamos memoria
    delete programaObj;
}

void View::dibujarFigura() {
    int opcion, color=1;

    cout << "Quiere la figura de un color?\n1. Si\n2. No\n>> ";
    cin >> opcion;
    if (opcion==1) {
        cout << "1. Rojo\n2. Azul\n3. Verde\n4. Purpura\n5. Amarillo\n";
        cin >> color;
        programaObj->dibujarFiguras(color);
    }else{
        programaObj->dibujarFiguras(); // Llama al método que no pide colores
    }
}


int View::menu() {

    int opcion;
    cout << "1. Agregar figuras geometricas\n";
    cout << "2. Dibujar figuras geometricas disponibles\n";
    cout << "3. Mostrar area de figuras geometricas adicionadas\n";
    cout << "4. Mostrar perimetro de figuras geometricas adicionadas\n";
    cout << "5. Sumar area de todas las figuras geometricas adicionadas\n";
    cout << "0. Salir\n\n";
    cout << "Ingrese la opcion que desea realizar\n";
    cin >> opcion;
    return opcion;
}


void View::principal() {
    int opcion;
    cout << "========== Bienvenido =========\n";
    do{
        opcion = menu();
        switch (opcion) {
            case 1:
                agregarFigura();
                break;
            case 2:
                dibujarFigura();
                break;
            case 3:
                programaObj->mostrarAreaFigura();
                break;
            case 4:
                programaObj->mostrarPerimetroFigura();
                break;
            case 5:
                cout << "La suma es: " << programaObj->calcularSumaAreas() << "\n";
                break;
            default:
                break;
        }
    } while (opcion != 0);
}