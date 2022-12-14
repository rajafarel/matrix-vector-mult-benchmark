#include <stdio.h>



void printVector(int* Vector, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        printf("%d,\t",Vector[i]);
    }
    printf("]\n");
}

void printMatrix(int* Matrix, int N){

    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t",Matrix[N*i+j]);
        }
    }
    printf("]\n");

}

void matrixVectorMult(int* Matrix, int* Vector, int* vo, int N){

    for(int i=0; i<N; i++){
        vo[i]=0;
        for(int j=0; j<N; j++){
            vo[i] += Matrix[N*i+j]*Vector[j];
        }
    }

}