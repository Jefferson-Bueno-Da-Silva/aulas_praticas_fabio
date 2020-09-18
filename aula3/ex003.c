#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, imc;

    printf("CALCULADORA DE IMC\n");

    printf("imforme sua altura \"EX: 1.70\": ");
    scanf("%f", &altura);

    printf("imforme o seu peso: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    
    if (imc < 18.5)
    {
        printf("Seu imc e: %f\nAbaixo do peso",imc);
    }else if (imc >= 18.5 && imc < 25)
    {
        printf("Seu imc e: %f\npeso normal",imc);
    }else if(imc >= 25 && imc < 30)
    {   
        printf("Seu imc e: %f\nSobre peso",imc);
    }
    else if(imc >= 30 && imc < 35)
    {
        printf("Seu imc e: %f\nobesidade gual 1",imc);
    }else if(imc >= 35 && imc < 40)
    {
        printf("Seu imc e: %f\nobesidade gual 2",imc);
    }else if(imc >= 40)
    {
        printf("obesidade gual 3");
    }
    
    
    
    return 0;
}