#include <stdio.h>
#include "utils.h"

void menu(int* opt);

int main(){
    int opt = 0;

    while(opt != 3)
    {
        menu(&opt);

        switch(opt){
            case 1:
            {
                float n;
                int sign;
                printf("Digite o número de ponto flutuante em decimal: ");
                scanf("%f",&n);

                //tranform number in positive and get the sign
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

                createFloatingBin(sign, intBin, fracBin, bin);

                printf("Representação de ponto flutuante em binário: %s\n\n",bin);

                break;
            }

            case 2:
            {
                char bin[33];
                printf("Digite o número de ponto flutuante em binário: ");
                scanf("%s",bin);

                float decimal;

                binaryToDecimal(bin, &decimal);

                printf("Representação de ponto flutuante binario em decimal: %f\n\n",decimal);
            }
        }
    }
    
}

void menu(int* opt)
{
    printf("=-=-=-= SELECIONE A OPÇÃO =-=-=-=\n");
    printf("1 -> Float para Binário\n");
    printf("2 -> Binário para Float\n");
    printf("3 -> Sair\n");

    scanf("%d",opt);
}