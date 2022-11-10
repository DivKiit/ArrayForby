#include<stdio.h>
/*Divyaranjan Sahoo
Unique Elements*/
int main(){
  int i,j,Div,Alpha=0;
  int DivArr[4];
  for (i=0;i<4;i++){
    printf("Element %i - ",i+1);
    scanf("%i",&DivArr[i]);}
  printf("\n");
  //Probing Distinctive elements
  printf("The unique element found in the array are: \n");
  for (i=0;i<4;i+=Alpha){
    Alpha=0;
    for (j=0;j<4;j++){
      if (DivArr[j]==DivArr[i]){
        Alpha+=1;}}
    switch (Alpha){case 1: printf("%i",DivArr[i]);}}
  printf("\n");
  return 0;}
