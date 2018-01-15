#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char x;
  char y;

  printf("Vous allez entrer deux entiers, on fait leur somme");
  printf("Vuillez entrer un entier x : \n");
  scanf("%d", &x);
  printf("Valeur lue %d\n", x);
  printf("Veuillez entrer un entier y: \n");
  scanf("%d", &y);
  int s = x + y;
  printf("Le résultat vaut : %d \n", s);

  return 0;
}
