#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TrocaPosicaoInteiros(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ComparaInteiros(int *a, int *b){
    if(*a > *b){
        return 1;
    }
    else if(*a < *b){
        return -1;
    }
    else{
        return 0;
    }
}

void BubbleSortInteiros(int *arr, int size, int (*compare)(int *, int *)){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(compare(&arr[j], &arr[j+1]) > 0){
                TrocaPosicaoInteiros(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main(){
    srand(time(NULL));
    int arr[] = {rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 100};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array:");
    for(int i = 0; i < size; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");

    BubbleSortInteiros(arr, size, ComparaInteiros);

    printf("Sorted Array:");
    for(int i = 0; i < size; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}