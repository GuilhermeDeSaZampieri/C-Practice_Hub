#include <stdio.h>

void funcaoComParametroInfinito(int n, ...){
  printf("\nParametro infinito:");
  //Funciona somente no compilador Pelles Ide 32Win
  int *p = (int *) (&n + 1);
  for(int i = 0; i < n; i++)
    {
      printf(" %d", p[i]);
    }
}

void UsandoFuncaoComParametroInfinito(){
  funcaoComParametroInfinito(3, 1, 2, 3);
}
