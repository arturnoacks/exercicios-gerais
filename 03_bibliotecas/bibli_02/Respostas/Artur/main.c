#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int n, x, r1, c1, r2, c2;

    scanf("%d%d", &r1, &c1);
    int matrix1[r1][c1];
    matrix_read(r1, c1, matrix1);

    scanf("%d%d", &r2, &c2);
    int matrix2[r2][c2];
    matrix_read(r2, c2, matrix2);

    int result[r1][c2];

    while(1){
    printf("1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida: ");
    scanf("%d", &x);
    printf("\n");

        switch(x){
            case 1:
                if(!possible_matrix_sum(r1, c1, r2, c2)){
                printf("Erro: as dimensoes da matriz nao correspondem\n");
                break;
                }
                matrix_add(r1, c1, matrix1, r2, c2, matrix2, result);
                matrix_print(r1, c2, result);
                break;
            
            case 2:
                if(!possible_matrix_sub(r1, c1, r2, c2)){
                printf("Erro: as dimensoes da matriz nao correspondem\n\n");
                break;
                }
                matrix_sub(r1, c1, matrix1, r2, c2, matrix2, result);
                matrix_print(r1, c2, result);
                break;

            case 3:
                if(!possible_matrix_multiply(c1, r2)){
                printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n\n");
                break;
                }
                matrix_multiply(r1, c1, matrix1, r2, c2, matrix2, result);
                matrix_print(r1, c2, result);
                break;

            case 4:
                scanf("%d", &x);
                scanf("%d", &n);
                if(x==1) {
                    scalar_multiply(r1, c1, matrix1, n);
                    matrix_print(r1, c1, matrix1);
                }
                else if(x==2){
                    scalar_multiply(r2, c2, matrix2, n);
                    matrix_print(r2, c2, matrix2);
                }
                break;
            
            case 5:
                scanf("%d", &x);
                if(x==1){
                    transpose_matrix(r1, c1, matrix1, result);
                    matrix_print(c1, r1, result);
                }
                else if(x==2){
                    transpose_matrix(r2, c2, matrix2, result);
                    matrix_print(c2, r2, result);
                }
                break;

            case 6:
                return 0;

            default:
                printf("Opcao invalida\n");
                break;
        }
    }
}