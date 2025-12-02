#pragma once
#include "utils.h"
#include <stdio.h>

void separateIntAndFrac(float num, int* intNum, float* fracNum){
    *intNum  = (int) num;
    *fracNum = num - (int) num;
}

void intToBin(int num, char* bin){
    int i = 0;
    while(num >= 1){
        bin[i] = num % 2 + '0';
        num /= 2;
        i++;
    }

    bin[i] = '\0';

    binReverse(bin);
}

void fracToBin(float num, char* bin){
    int i = 0;
    while(num != 0.0f && i < 32){
        num *= 2;
        bin[i] = (int) num + '0';
        num = num - (int) num;
        i++;
    }

    bin[i] = '\0';

    binReverse(bin);
}

void binReverse(char* bin){
    int binLen = getStrLength(bin);

    printf("binlen: %d\n", binLen);

    for(int i = 0; i < binLen/2; i++){
        swap(&bin[i], &bin[binLen-i-2]);
    }
}

int getStrLength(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    return i+1;
}

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}