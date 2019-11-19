//
// Created by erksters on 11/19/2019.
//

#ifndef POLYMORPHISM_SQUARE_H
#define POLYMORPHISM_SQUARE_H

#include <stdlib.h>
#include <stdio.h>
#include "Shape.h"


Shape * New_Square(int length){
    Shape * Sq = New_Shape();
    Sq->area = length * length;
    Sq->perimeter = 4 * length;
}




#endif //POLYMORPHISM_SQUARE_H
