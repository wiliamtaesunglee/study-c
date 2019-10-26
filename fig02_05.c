#include <stdio.h>

int main(void)
{
 int inteiro01;//primeira entrada de valor 
 int inteiro02;//segunda entrada de valor
 int soma;//resultado da soma

 printf("digite o primeiro inteiro: \n");
 scanf("%d", &inteiro01 );

 printf("digite o segundo inteiro: \n");
 scanf("%d", &inteiro02);

 soma = inteiro01 + inteiro02;

 printf("resultado da soma é %d\n ", soma);
}
