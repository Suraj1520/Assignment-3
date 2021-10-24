/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

char primesArray[INT_MAX] = {0};


void sieveOfEratosthenes(int n) {

  for(int i = 2; i*i<=n; i++) {
    if(primesArray[i] == 0) {
      for(int j = 2; j*i<=n; j++)
        primesArray[i*j] = 1;
    }
  }

}

void outputPrimes(int n) {
  for(int i = 2; i<=n; i++) {
    if(primesArray[i] == 0)
      printf("%d ", i);
  }
  printf("\n");
}

int main() {  

  int n;
  scanf("%d", &n);

  sieveOfEratosthenes(n);
  outputPrimes(n);

  return 0;
}