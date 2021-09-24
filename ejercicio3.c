#include <stdio.h>
#define R 2
#define C 3

int main()
{
    int matriz[R][C];
    int i, j;

    for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<C;i++)
        {
          for(j=0;j<R;j++)
          {
             printf("%d ", matriz[j][i]);
          }
  }
    return 0;
}