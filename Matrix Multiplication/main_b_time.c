#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 5

FILE *timelist;

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
    int N;
    printf("Input N:");
    scanf("%d",&N);
    const int A = N;
    timelist = fopen("timelist.dat","w");
    clock_t t;
    srand(time(0));
    
    for(N; N <= A*10; N = N+A){

    int* Matrix = (int *) malloc(N*N*sizeof(int));
    int* Vector = (int *) malloc(N*sizeof(int));
    int* Result = (int *) malloc(N*sizeof(int));

    if(Matrix == NULL | Vector == NULL){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        t = clock();
        matrixVectorMult(Matrix,Vector,Result,N);
        t = clock() - t;
    }
    double duration = ((double)t)/CLOCKS_PER_SEC;
    fprintf(timelist,"(%d,%f),", N, duration);
    
    free(Matrix);
    free(Vector);
    free(Result);
    }
   
    return 0;
}