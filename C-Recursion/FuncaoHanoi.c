#include <stdio.h>

void hamoi(int n, char origem, char auxiliar, char destino) {
  if (n == 1) {
    printf("Mover disco de %C para %C\n", origem, destino);
  } else {
    hamoi(n - 1, origem, destino, auxiliar);
    printf("Mover disco de %C para %C\n", origem, destino);
    hamoi(n - 1, auxiliar, origem, destino);
  }
}

int mainHamoi() {
  int n;
  printf("Num? ");
  scanf("%d", &n);
  hamoi(n, 'A', 'B','C');
  return 0;
}