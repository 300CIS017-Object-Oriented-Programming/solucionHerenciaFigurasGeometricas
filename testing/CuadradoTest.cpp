//
// Created by lufe0 on 4/10/2022.
//

#include "gtest/gtest.h"
#include "../src/Model/Cuadrado.h"

TEST(CuadradoTest, calcularArea){   //Arrange section

    Cuadrado * cuadradoObj = new Cuadrado(10);
    float area = cuadradoObj->calcularArea();
    ASSERT_TRUE(area == 100);
}

TEST(CuadradoTest, calcularPerimetro){   //Arrange section

    Cuadrado * cuadradoObj = new Cuadrado(10);
    float area = cuadradoObj->calcularPerimetro();
    ASSERT_TRUE(area == 40);
}

