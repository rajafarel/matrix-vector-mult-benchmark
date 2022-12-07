#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 5

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}



void initVector(int* Vector, int N){
    for(int i=0; i<N; i++){
        Vector[i] = generateRandomInt(LOWER,UPPER);
    }
}

void initMatrix(int* Matrix, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Matrix[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}

int main(void){

    srand(time(0));

    int N = 3;
    int* Matrix = (int *) malloc(N*N*sizeof(int));
    int* Vector = (int *) malloc(N*sizeof(int));
    int* Result = (int *) malloc(N*sizeof(int));

    if(Matrix == NULL | Vector == NULL){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        initMatrix(Matrix, N);
        printf("Matrix=");
        printMatrix(Matrix, N);
        initVector(Vector, N);
        printf("Vector=");
        printVector(Vector, N);
        matrixVectorMult(Matrix,Vector,Result,N);
        printf("Result=");
        printVector(Result, N);
    }

    free(Matrix);
    free(Vector);
    free(Result);

    return 0;
}