#include <stdio.h>

int main(int argc, char* argv[]) { 
  int a = 17; 
  int b = 3; 
  int res = a; 
  while (res > b) {
    res = res - b;
  } 
  printf("%i modulo %i = %i\n", a, b, res); 
  if(res == a % b)
    printf("OK\n");
  else
    printf("Bug!!!\n");
}
