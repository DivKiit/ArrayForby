#include<stdio.h>
/*Divyaranjan Sahoo
Copying Arr elements in rev*/
int main(){
  int i,j,n;
  printf("Nos of Elements - ");
  scanf("%i",&n);
  int AlphaArr[n];
  int BetaArr[n];
  for (i=0;i<n;i++){
    printf("Array Value %i - ",i+1);
    scanf("%i",&AlphaArr[i]);}
  for (j=0;j<n;j++){
    BetaArr[n-j-1]=AlphaArr[j];}
  printf("\nArray [Rev-Copied] - {");
  for (j=0;j<n;j++){
    printf("%i,",BetaArr[j]);}
  printf("\b}\n");
  return 0;}
