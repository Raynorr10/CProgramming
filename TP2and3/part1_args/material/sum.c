#include <stdio.h>
#include <string.h>

char charToInteger(char);

char charToInteger(char c){
    switch (c) {
      case '0':
        return 0;
      case '1':
        return 1;
      case '2':
        return 2;
      case '3':
        return 3;
      case '4':
        return 4;
      case '5':
        return 5 ;
      case '6':
        return 6;
      case '7':
        return 7;
      case '8':
        return 8;
      case '9':
        return 9;
    }
    return 10;
  }


void display_message(char * message)
{
  printf(message);
}

char isCharInteger(char c)
{
  switch (c) {
    case '0':
      return 1;
    case '1':
      return 1;
    case '2':
      return 1;
    case '3':
      return 1;
    case '4':
      return 1;
    case '5':
      return 1;
    case '6':
      return 1;
    case '7':
      return 1;
    case '8':
      return 1;
    case '9':
      return 1;
  }
  return 0;
}

char isCharInteger2(char c){
  if ((c>=48) && (c<=57)) return(1);
  return (0);
}

char charToInteger2(char c){
  return(c-48);
}

char stringToInteger(char* c){
  char j = 0;
  char n = 0;
  while (c[j]!='\0'){
    char u = charToInteger(c[j]);
    j++;
    n = 10*n + u;
  }
  return (n);
}
int main(int argc, char *argv[]) {
  /* to be completed */
  // next line just shows how to use display_message; could be removed
  if (argc != 3){
  display_message("Wrong usage, 2 parameters expected \n");
  printf("The actual number of args is %d", argc);
  return (1);
  }

  else{
    for (int i=1;i<argc;i++){
      int j = 0;
      while (argv[i][j]!='\0'){
        if (isCharInteger2(argv[i][j]) == 0){
          display_message("Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2");
          return(1);
        }
        j++;
      }
    }
  }

  char a = stringToInteger(argv[1]);
  char b = stringToInteger(argv[2]);
  char s = a + b;
  printf("a + b = %d \n", s);
  return(0);
}
