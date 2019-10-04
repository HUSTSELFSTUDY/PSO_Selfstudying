//
// Created by ashitaka on 03/10/2019.
//
// f(x,y) = -(a-x)^2 - b(y-x^2)^2
#ifndef PSO_APP_FITNESS_H
#define PSO_APP_FITNESS_H

void fitness_calculation(population *citizen){
    for (int i = 0; i < _POP_; ++i) {
        citizen[i].position.fitness = -(a_cpo - citizen[i].position.x)*(a_cpo - citizen[i].position.x)
                - b_cpo*(citizen[i].position.y - citizen[i].position.x*citizen[i].position.x)
                *(citizen[i].position.y - citizen[i].position.x*citizen[i].position.x);
    }
}

#endif //PSO_APP_FITNESS_H
