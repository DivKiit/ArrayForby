#include <stdio.h>
/*Divyaranjan Sahoo
First Char Pattern*/
int main(){
    int i, j;
    for (i=7;i>=1;i--){
      for (j=1; j<=7; j++){
        if(j<=i)
        printf ("D");
        else
        printf(" ");}
      for (j=1;j<=7;j++){
        if(j<=i)
        printf ("D");
        else
        printf(" ");}
        //printf ("\n");
      for (j=1;j<=7;j++){
        if(j<=i)
        printf ("D");
        else
        printf(" ");}
        printf ("\n");}
    return 0;}
