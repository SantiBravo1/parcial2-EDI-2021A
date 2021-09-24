#define nmax 50
#include <stdio.h>
void cls(void);
main()
{
  int i, j, k, n;
  float mat[nmax][nmax];
  char *msg[] =  {"la matriz es simetrica", "la matriz no es simetrica"};
  cls();
  printf  ("\n\t\t\t\t\t\tDigite el orden de la matriz: ");
  scanf ("%d", &n);
  while ( n <= 0 || n > nmax )
  {
      printf  ("\n\t\t\t\tEl orden de la matriz debe ser entero, positivo y no mayor que %d,  digite nuevamente:", nmax);
      scanf ("%d", &n);
  }
  printf  ("\n");
  for ( i =  0; i < n; i++  )
  {
      for ( j =  0; j < n; j++  )
         {
             printf  ("\t\t\t\t\t\tDigite la componente mat[%d][%d]: ", i, j);
             scanf ("%f", &mat[i][j]);
         }
  }
  k =  0;
  for ( i =  0; i < n; i++  )
  {
      for ( j =  0; j < n; j++  )
       {
           if ( mat[i][j]  != mat[j][i]  ) k =  2;
       }
  }
  if ( k ==  2 )
  {
      k =  1;
      for ( i =  0; i < n; i++  )
      {
          for ( j =  0; j < n; j++  )
          {
              if ( mat[i][j] != -mat[j][i]  ) k =  2;
          }
      }
  }
  printf("\n\t\tOrden de la matriz %3d", n);
  for ( i =  0; i < n; i++  )
  {
      if ( i ==  0 )
       {
           printf  ("\n{ {");
       }
     else
       {
           printf  ("\n  {");
       }
     for ( j =  0; j < n; j++  )
     {
         if ( j < n - 1 )
         {
             printf  ("%10f, ", mat[i][j]);
         }
        else
         {
             printf  ("%10f }", mat[i][j]);
         }
     }
  }
  printf  (" }\n\n\t\t%s\n\n", msg[k]);
}
void cls(void)
{
   printf  ("\033[2J");
   printf  ("\033[0;0f");
}
