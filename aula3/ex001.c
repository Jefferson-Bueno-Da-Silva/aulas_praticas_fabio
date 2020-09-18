#include <stdio.h>
#include <stdlib.h>




int main()
{
    //DEFININDO VARIAVEIS
    int valor;
    
    //ENTRADA DE DADOS
    printf("par ou impar:\n");
    printf("Digite um numero para saber se e par ou impar\n");
    scanf("%d", &valor);

    if ((valor % 2) == 0)
    {
        printf("%d e um numero PAR!\n", valor);
    }else
    {
        printf("%d e um nomero IMPAR!", valor);
    }
    
    


    return 0;
}
