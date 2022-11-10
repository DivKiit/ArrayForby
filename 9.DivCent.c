#include<stdio.h>
/*Divyaranjan Sahoo
Centuries*/
int main(){
  int i=1,Alpha,DivCent=0;

  Div:
  printf("Input the score of player %i - ",i);
  scanf("%i",&Alpha);
  if (Alpha>=0){DivCent+=Alpha;} i++;

  if (i<=10) goto Div;

  DivCent/=100;
  printf("\nNumber of Centuries - %i\n",DivCent);
  return 0;}
