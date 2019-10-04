#include <stdio.h>
#include "stdlib.h"

#include "constance.h"
#include "functions.h"
#include "initial.h"
#include "problem.h"
#include "fitness.h"
#include "update.h"
#include "conclusion.h"

int main() {
    int count = 0;
    location global_best;
    population *citizen;
    citizen = (population*)malloc(_POP_* sizeof(population));
    initialization(citizen);
    print_population(citizen);
    fitness_calculation(citizen);
    find_global_best(citizen,&global_best);
    update_velocity_position(citizen,global_best);
    while (count < _TIME_MAX_){
        fitness_calculation(citizen);
        update_best(citizen,&global_best,&count);
        update_velocity_position(citizen,global_best);
    }
    printf("Best found : \n");
    print_info(global_best);
    return 0;
}