#include<stdio.h>
/*Divyaranjan Sahoo
Reverse number palindrome*/
int main(){
  int Num,i,j,Rev=0;
  printf("Input the number here - ");
  scanf("%i",&Num);
  int DivNum = Num;
  do{Rev=Rev*10+Num%10;Num/=10;}while(Num!=0);
  printf("\nReverse - %i\n",Rev);
  if(Rev==DivNum){
    printf("\nThe number is a palindrome\n");}
  else{
    printf("\nThe number is not palindrome\n");}
  return 0;}
