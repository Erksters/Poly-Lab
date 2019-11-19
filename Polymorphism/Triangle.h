//
// Created by erksters on 11/19/2019.
//

#ifndef POLYMORPHISM_TRIANGLE_H
#define POLYMORPHISM_TRIANGLE_H

#include <stdlib.h>
#include <stdio.h>
#include "Shape.h"
struct Triangle {
    int a;
    int b;
    int c;
};

Shape * New_Triangle(int a, int b, int c ,int height){
        Shape * Sq = New_Shape();
        Sq->area = b * height / 2;
        Sq->perimeter = a + b + c;
    }




#endif //POLYMORPHISM_TRIANGLE_H
