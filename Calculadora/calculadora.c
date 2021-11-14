#include <stdio.h>

int main(){

    float a;
    float b;
    float resultado;
    char operacao;

    scanf("%f", &a);
    scanf(" %c ", &operacao);
    scanf("%f", &b);

    if(operacao == '-'){
        resultado = a - b;
    }else if(operacao == '+'){
        resultado = a + b;
    }else if(operacao == '*'){
        resultado = a * b;
    }else if(operacao == '/'){
        resultado = a / b;
    }
    printf("%.2f ", resultado);

    return 0;

}