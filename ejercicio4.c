#include <stdio.h>
#define R 2
#define C 3

int main()
{
    int matriz[R][C];
    int i, j;
    int mayor = matriz[R][C];

    for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < R; i++)
        {
        for (int j = 0; j < C; j++)
        {
            int elementoActual = matriz[i][j];
            if (elementoActual > mayor) mayor = elementoActual;
        }
        }
    printf("Mayor: %d en la posicion [%d][%d]\n", mayor, i ,j);
    return 0;
}
