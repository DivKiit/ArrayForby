#include<stdio.h>
/*Divyaranjan Sahoo
Positive Negative Od Eve*/
int main(){
  int i,j,Posit=0,Neg=0,Alpha=0,Beta=0;
  int DivArr[20];
  for (i=0;i<20;i++){
    printf("Array value %i - ",i+1);
    scanf("%i",&DivArr[i]);}
  for (i=0;i<20;i++){
    if(DivArr[i]>0){Posit++;}
    if(DivArr[i]<0){Neg++;}
    if(DivArr[i]%2==1){Alpha++;}
    if(-DivArr[i]%2==1){Alpha++;}
    if(DivArr[i]%2==0){Beta++;}}
  printf("\nPositive - %i",Posit);
  printf("\nNegative - %i",Neg);
  printf("\nOdd - %i",Alpha);
  printf("\nEven - %i\n",Beta);
  return 0;}
