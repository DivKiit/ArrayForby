#include<stdio.h>
/*Divyaranjan Sahoo
Frequency of element in array*/
int main(){
  int i,Freq=0,Elem;
  int DivArr[25];
  for (i=0;i<25;i++){
    printf("Enter the element %i - ",i+1);
    scanf("%i",&DivArr[i]);}
  printf("\nInput the element to find frequency of -");
  scanf("%i",&Elem);
  for (i=0;i<25;i++){
    if (DivArr[i]==Elem){Freq++;}}
  printf("\nThe frequency of %i is %i times\n",Elem,Freq);
  return 0;}
