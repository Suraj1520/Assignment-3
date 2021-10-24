/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#include<string.h>

#define SIZE 1000

typedef long long ll;

ll hashCompute(char *s){
  int g = 31;
  ll hash = 0;
  for(int i=0; i<strlen(s); i++)
    hash = g * hash + s[i];
  return hash;
}

int main(){
    char s[SIZE] = {0};
    printf("Enter the String:\n");
    scanf("%[^\n]s",s);
    printf("Hash value: %lld",hashCompute(s));
}
