//
// Created by ashitaka on 03/10/2019.
//

#ifndef PSO_APP_INITIAL_H
#define PSO_APP_INITIAL_H

typedef struct{
    double x;
    double y;
    double fitness;
}location;

typedef struct{
    double x;
    double y;
}vector;

typedef struct{
    location position;
    vector velocity;
    location personal_best; // best known position
}population;

void initialization(population *citizen){

    for (int i = 0; i < _POP_; ++i) {
        citizen[i].position.x = Random(-10,-10);
        citizen[i].position.y = Random(-10,-10);
        citizen[i].personal_best = citizen[i].position;
        citizen[i].velocity.x = 0;
        citizen[i].velocity.y = 0;
    }
}

void print_population(population *citizen){
    for (int i = 0; i < _POP_; ++i) {
        printf("citizen %3d (%.2f ;%.2f )\n", i+1, citizen->position.x,citizen->position.y);
    }
}

#endif //PSO_APP_INITIAL_H
