#include <stdio.h> 
int max(int a, int b) {
  if (a > b) // Parenthèses OBLIGATOIRES 
    return a; 
  else 
    return b; 
} 

int maxTableau(int nbElements, 
	       int tableau[]) { 
  int resultat = tableau[0]; 
  int i = 1; 
  while (i < nbElements) { // celles-ci aussi 
    resultat = max(resultat, tableau[i]); 
    i = i + 1; 
  } 
  return resultat; 
} 

int main(int argc, char **argv) { 
  int tab[] = {10, 20, 42, 40}; 
  int res = maxTableau(4, tab); 
  printf("Max du tableau: %i\n", res); 
  return 0; 
} 
