#include <stdio.h>

int main()
{
    int matriz[100][100], i, j, n;

    printf("Dame N: ");
    scanf("%d", &n);

    printf("La matriz es de: %d X %d\n", n, n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
