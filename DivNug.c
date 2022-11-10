#include <stdio.h>
/*Divyaranjan Sahoo
Num Increase Decrease*/
int main(){
  int i,j,Alpha=5,k;
  //For increment till 5
  for(i=1;i<=5;i++){
    for(j=1;j<=Alpha-1;j++){printf(" ");}
    for(k=1;k<=2*i-1;k++){printf("%i",i );}
    for(j=1;j<=2*(Alpha-1);j++){printf(" ");}
    for(k=1;k<=2*i-1;k++){printf("%i",i);}
    Alpha-=1;printf("\n");}
  //For decrement till 1
  for(i=4;i>=1;i--){
    for(j=1;j<=Alpha+1;j++){printf(" ");}
    for(k=1;k<=2*i-1;k++){printf("%i",i );}
    for(j=1;j<=2*(Alpha+1);j++){printf(" ");}
    for(k=1;k<=2*i-1;k++){printf("%i",i);}
    Alpha+=1;printf("\n");}

    return 0;}
