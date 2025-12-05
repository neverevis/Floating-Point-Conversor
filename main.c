#include <stdio.h>
#include "utils.h"

void menu(int* opt);

int main(){
    int opt = 0;
    menu(&opt);

    switch(opt){
        case 1:
        {
            float n;
            int sign;
            printf("Digite o número de ponto flutuante em decimal: ");
            scanf("%f",&n);

            if(n < 0){
                sign = 1;
                n *= -1;
            }else{
                sign = 0;
            }

            char bin[33];

            int intNum;
            float fracNum;

            separateIntAndFrac(n, &intNum, &fracNum);

            char intBin[33], fracBin[33];

            intToBin(intNum, intBin);
            fracToBin(fracNum, fracBin);

            printf("conversão binária: %s.%s\n",intBin,fracBin);

            createFloatingBin(sign, intBin, fracBin, bin);

            break;
        }

        case 2:
        {
            float n;
            printf("Digite o número de ponto flutuante em binário: ");
            scanf("%f",&n);
        }
    }
}

void menu(int* opt)
{
    while(*opt != 1 && *opt != 2)
    {
        printf("=-=-=-= SELECIONE A OPÇÃO =-=-=-=\n");
        printf("1 -> Float para Binário\n");
        printf("2 -> Binário para Float\n");

        scanf("%d",opt);
    }
}