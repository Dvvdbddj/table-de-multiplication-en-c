#include <stdio.h>
#include <stdlib.h>

void tableMultiplication(int n)
{
    for(int i=0; i<=10; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }
}

int main()
{
    int nombre=0;

    printf("entrez un chiffre: ");
    scanf("%d", &nombre);

    tableMultiplication(nombre);

    return 0;
}

// notes
