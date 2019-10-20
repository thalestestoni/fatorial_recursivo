#include <stdio.h>  
#include <stdlib.h>

int fatorial(int x);

int main(){
    int num, fat;

    printf("Digite o numero que deseja fatorial\n");
    scanf("%d", &num);

    fat = fatorial(num);

    printf("Resposta: %d\n", fat);

    return 0;
}

int fatorial(int x){
    if(x == 0)
        return 1;
    else
        return x * fatorial(x-1);
}