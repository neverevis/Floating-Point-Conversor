#include "utils.h"
#include <stdio.h>

void separateIntAndFrac(float num, int* intNum, float* fracNum){
    *intNum  = (int) num;
    *fracNum = num - (int) num;
}

void intToBin(int num, char bin[33]){
    int i = 0;
    while(num >= 1){
        bin[i] = num % 2 + '0';
        num /= 2;
        i++;
    }

    bin[i] = '\0';

    binReverse(bin);
}

void fracToBin(float num, char bin[33]){
    int i = 0;

    if(num == 0.0f){
        bin[0] = '0';
        i++;
    }

    while(num != 0.0f && i < 32){
        num *= 2;
        if(num >= 1)
        {
            bin[i] = '1';
            num--;
        }
        else
        {
            bin[i] = '0';
        }
        i++;
    }

    bin[i] = '\0';
}

void binReverse(char bin[33]){
    int binLen = getStrLength(bin);

    printf("binlen: %d\n", binLen);

    for(int i = 0; i < binLen/2; i++){
        swap(&bin[i], &bin[binLen-i-1]);
    }
}

int getStrLength(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    return i;
}

void createFloatingBin(int sign, char intBin[33], char fracBin[33], char bin[33]){
    bin[0] = sign;
    int exponent;

    //number < 1.0
    if(getStrLength(intBin) == 0)
    {
        exponent = -1;
        for(int i = 0; i < 33; i++)
        {
            if(fracBin[i] == '1'){
                exponent -= i;
            }
        }
    }
    //number >= 1.0
    else
    {
        exponent = getStrLength(intBin) - 1;
    }
    
    char significand[65];
    concatStrings32(intBin,fracBin,significand);

    printf("expoente: %d\n",exponent);
    printf("significando: %s\n", significand);
}

void concatStrings32(char str1[33], char str2[33], char result[65]){
    int resultIndex = 0;
    int iterator = 0;
    int str = 1;

    while(resultIndex < 64){
        if(str == 1)
        {
            if(str1[iterator] != '\0')
            {
                result[resultIndex] = str1[iterator];
                resultIndex++;
                iterator++;
            }
            else
            {
                str = 2;
                iterator = 0;
            }
        }
        else if(str == 2)
        {
            if(str2[iterator] != '\0')
            {
                result[resultIndex] = str2[iterator];
                resultIndex++;
                iterator++;
            }
            else
            {
                break;
            }
        }
    }

    result[resultIndex] = '\0';
}

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}