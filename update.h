//
// Created by ashitaka on 03/10/2019.
//

#ifndef PSO_APP_UPDATE_H
#define PSO_APP_UPDATE_H

void find_global_best(population *citizen, location *global_best){
    *global_best = citizen[0].position;
    for (int i = 1; i < _POP_; ++i) {
        *global_best = citizen[i].position.fitness > global_best->fitness ? citizen->position : *global_best;
    }
}

void update_velocity_position(population *citizen, location global_best){

    for (int i = 0; i < _POP_; ++i) {
        // update velocity
        double r1 = Random(0,1);
        double r2 = Random(0,1);
        // update velocity on x
        citizen[i].velocity.x = ine_cpo*citizen[i].velocity.x
                + cog_cpo*r1*(citizen[i].personal_best.x - citizen[i].position.x)
                + soc_cpo*r2*(global_best.x - citizen[i].position.x);
        // update velocity on y
        citizen[i].velocity.y = ine_cpo*citizen[i].velocity.y
                + cog_cpo*r1*(citizen[i].personal_best.y - citizen[i].position.y)
                + soc_cpo*r2*(global_best.y - citizen[i].position.y);
        //***********************************************************************
        //***********************************************************************
        // update position
        citizen[i].position.x += citizen[i].velocity.x;
        citizen[i].position.y += citizen[i].velocity.y;
    }

}

void update_best(population *citizen, location *global_best, int *count){
    location tmp = *global_best;
    for (int i = 1; i < _POP_; ++i) {
        *global_best = citizen[i].position.fitness > global_best->fitness ? citizen->position : *global_best;
    }
    if(tmp.x == global_best->x && tmp.y == global_best->y) (*count)++;
    else *count = 0;
}

#endif //PSO_APP_UPDATE_H
