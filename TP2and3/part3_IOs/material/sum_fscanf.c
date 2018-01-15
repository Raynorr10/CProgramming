#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *f;
  FILE *fp;
  char file_name[80];
  int n;
  int ret;
  int somme = 0;

  printf("file name?\n");
  scanf("%s", file_name);

  f = fopen(file_name, "r");

  do{
    ret=fscanf(f,"%d\n", &n);
    somme = somme + n;
  } while (ret == 1);

  printf("La somme des entiers vaut : %d", somme);

  fp = fopen("output", "w+");
  fprintf(fp, "La somme des entiers vaut : %d", somme);

  return 0;
}
