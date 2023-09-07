#include "matrix_utils.h"

void matrix_read(int rows, int cols, int matrix[rows][cols]){
    int i, j;
    for(i=0; i<rows; i++) for(j=0; j<cols; j++) scanf("%d", matrix[i][j]);
}

void matrix_print(int rows, int cols, int matrix[rows][cols]){
    int i ,j;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d", matrix[i][j]);
            if(j!=cols-1) printf(" ");
        }
    if(i!=rows-1) printf("\n");
    }
}

int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2){
    return (rows1==rows2 && cols1==cols2);
}