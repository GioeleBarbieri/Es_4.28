#include <stdio.h>

int main(void)
{
    int i, numero, valoreMassimo;
    valoreMassimo=0;

    for(i=1; i<=10; i++)
    {
        printf("valore %d ", i);
        scanf("%d, &numero");
        if(numero > valoreMassimo)
        {
            valoreMassimo=numero;
        }
    }
    printf("il valore massimo e' %d", valoreMassimo);
    return 0;
}
