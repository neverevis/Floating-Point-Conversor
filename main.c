#include <stdio.h>
#include "utils.h"

int main(){
    char bin[100];
    fracToBin(0.5f, bin);
    printf("binario: %s",bin);
}

/*int main(){
    int opt;
    printf("=-=-=-= SELECIONE A OPÇÃO =-=-=-=\n");
    printf("1 -> Float para Binário\n");
    printf("2 -> Binário para Float\n");

    scanf("%d",&opt);

    switch(opt){
        case 1:
        {
            float n;
            printf("Digite o número de ponto flutuante: ");
            scanf("%f",&n);

        }

        case 2:
        {

        }
    }
}*/