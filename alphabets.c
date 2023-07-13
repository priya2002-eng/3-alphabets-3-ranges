#include <stdio.h>
int main(){
  char a, b, c;
  scanf("%c %c %c", &a, &b, &c);

  for(int i = a; i <= b; i++){
    printf("%c", i);
  }

  printf("\n");

  for(int i = b; i <= c; i++){
    printf("%c", i);
  }

  printf("\n");
  for(int i = a; i <= c; i++){
    printf("%c", i);
  }

  return 0;
}
