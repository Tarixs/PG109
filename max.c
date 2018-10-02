#include <stdio.h>
#define N 10

int main(int argc, char **argv) {
  int tab[N] = {20, 13, 70, 2, 50, 3, 1, 2, 3, 4};
  int max = tab[0];
  for (int i=1; i < N; i = i + 1) {
    if (tab[i] > max)
      max = tab[i];
  }
  printf("%i\n", max);
}
