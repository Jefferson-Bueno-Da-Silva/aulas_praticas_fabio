#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 99, y = 10;
    
    //soma subtração
    //y = x + 10 - 2;
    
    //multiplicação
    //y = x * 2;
    
    //divisão
    //y = x / 2;
    
    //atribulador equivalente a y = y +2;
    //pode ser usado com outros operadores +, -, *, /.
    y += 2;


    printf("O valor é: %d\n", y);

    system("PAUSE");
    return 0;
}
