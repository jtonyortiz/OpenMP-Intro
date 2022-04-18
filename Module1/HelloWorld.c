//
//Author: James Ortiz
//File: HelloWorld.c
//Description: Hello World with parallelism demo
//Compile: gcc -fopenmp HelloWorld.c 
//export OMP_NUM_THREADS=4
//

#include <omp.h>
#include <stdio.h>

int main(){

    //Defining a C-Block for Parallelism:
    #pragma omp parallel
    {
    int ID = omp_get_thread_num(); //Obtain an id for each thread:
    printf("hello(%d)", ID);
    printf(" world(%d) \n", ID);
    } //Closes structured block

}