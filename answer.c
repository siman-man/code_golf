#include <stdio.h>

int main(){
  int n = 0;
  int sum = 0;

  scanf("%d", &n);

  for(int i = 1; n > 0; i++){

    if( i % 2 != 0 && i % 3 != 0 ){
      sum += i;
      n--;
    }
  }

  printf("%d\n", sum);

  return 0;
}
