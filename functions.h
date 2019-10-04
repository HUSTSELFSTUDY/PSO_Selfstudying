//
// Created by ashitaka on 03/10/2019.
//

#ifndef PSO_APP_FUNCTIONS_H
#define PSO_APP_FUNCTIONS_H

#include "time.h"

float Random(float a, float b) // random a float in (a,b)
{
    srand(time(NULL));
    return a + (b - a)*rand()/RAND_MAX;
}

#endif //PSO_APP_FUNCTIONS_H
