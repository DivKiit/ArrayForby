#include <stdio.h>
/*Divyaranjan Sahoo
Dollar mountain*/
int main(){
  int i,j,Alpha=5,k;
  for(i=1;i<=5;i++){
    for(j=1;j<=Alpha-1;j++){
      printf(" ");}
    for(k=1;k<=2*i-1;k++){
      printf("$");}
    for(j=1;j<=2*(Alpha-1);j++){
      printf(" ");}
    for(k=1;k<=2*i-1;k++){
      printf("$");}

    Alpha-=1;
    printf("\n");}
   return 0;}
