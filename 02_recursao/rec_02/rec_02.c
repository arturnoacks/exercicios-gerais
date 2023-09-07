#include <stdio.h>

int SomaPares(int *vet, int qtd);

int main(){
    int n, qtd, i;
    scanf("%d", &n);

    for(; n>0; n--){
        scanf("%d", &qtd);
        int vet[qtd];

        for(i=0; i<qtd; i++) scanf("%d", &vet[i]);

        printf("%d\n", SomaPares(vet, qtd));
    }
    
    return 0;
}

int SomaPares(int *vet, int qtd){
    if(qtd==0){
        return 0;
    } else {
        return (*vet) * !(*vet%2) + SomaPares(vet+1, qtd-1);
    } 
}