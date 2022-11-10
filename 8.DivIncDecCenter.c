#include <stdio.h>
/*Divyaranjan Sahoo
Center Align pattern*/
int main() {
  int i,j,k,Alpha,Beta;
  Alpha=8;Beta=1;

  for(i=1;i<=9;i++){
    for(j=1;j<=Alpha;j++){
      printf(" ");}
    if(i<=5){
      for(k=1;k<=Beta;k++){
        printf("%i",i);}}
    if(i>5){
      for(k=1;k<=Beta;k++){
        printf("%i",10-i);}}

    if(Alpha>i){
      Alpha-=1;Beta+=2;}
    if(Alpha<i){
      Alpha+=1;Beta-=2;}
    printf("\n");}
  return 0;}
