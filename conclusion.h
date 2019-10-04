//
// Created by ashitaka on 03/10/2019.
//

#ifndef PSO_APP_CONCLUSION_H
#define PSO_APP_CONCLUSION_H

void print_info(location position){
    printf("Location: ( %.2f ; %.2f )\n",position.x,position.y);
    printf("Fitness: %.2f\n", position.fitness);
}

#endif //PSO_APP_CONCLUSION_H
