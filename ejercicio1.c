#include <stdio.h>
#define R 3

int main()
{
float matriz[R][R];
    int i, j;
    float suma=0;
    float promedio;

    for(i=0; i<R; i++)
    {
        for(j=0; j<R; j++)
        {
            printf("matriz[%d][%d]", j, i);
            scanf("%f", &matriz[j][i]);
        }
    }
    for(i=0; i<R; i++)
    {
        for(j=0; j<R; j++)
        {
            suma=suma+matriz[i][j];
        }
        promedio=suma/R;
        printf("Promedio columna %d: %f\n", i+1, promedio);
        suma=0;
    }
    return 0;
}