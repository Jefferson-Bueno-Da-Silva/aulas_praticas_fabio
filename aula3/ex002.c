#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    float valor1, valor2;

    printf("umforme um valor: \n", opcao);
    scanf("%f", &valor1);
    printf("imforme outro valor: \n", opcao);
    scanf("%f", &valor2);

    printf("QUAL OPERACAO VOCE DESEJA FAZER ? \n");
    printf(" 1 -- ADICAO: \n");
    printf(" 2 -- SUBTRACAO: \n");
    printf(" 3 -- DIVISAO: \n");
    printf(" 4 -- MULTIPLICACAO: \n");
    scanf("%d", &opcao);

    float soma = valor1 + valor2;
    
    if (opcao == 1)
    {
        printf("A ADICAO de %.0f e %.0f e igaul a: %.0f", valor1, valor2, soma);
    }else if (opcao == 2)
    {
        printf("A SUBTRACAO de %.0f e %.0f e igaul a: %.0f", valor1, valor2, valor1 - valor2);
    }else if(opcao == 3)
    {   
        printf("A DIVISAO de %.1f e %.1f e igaul a: %.1f", valor1, valor2, valor1 / valor2);
    }
    else if(opcao == 4)
    {
        printf("A MULTIPLICACAO de %.2f e %.2f e igaul a: %.2f", valor1, valor2, valor1 * valor2);
    }else
    {
        printf("OPCAO INVALIDA LE DIREITO KCETE");
    }
    
    
    
    return 0;
}

