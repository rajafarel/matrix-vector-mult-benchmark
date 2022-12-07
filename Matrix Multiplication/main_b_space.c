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
        int N;
        printf("Input N:");
        scanf("%d",&N);
        printf("Press CTRL+C to interrupt the process \n");
        srand(time(0));

        while (1){
        int* Matrix= (int *) malloc(N*N*sizeof(int));
        int* Vector= (int *) malloc(N*sizeof(int));
        int* Result= (int *) malloc(N*sizeof(int));

        free(Matrix);
        free(Vector);
        free(Result);
        }
        return 0;
    }