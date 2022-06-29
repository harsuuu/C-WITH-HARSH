#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
     do{
         printf("The value is %d\n", i+1);   // i+1 because natural number bola hai brna nhi
         i++;
     }while(i<n);
    return 0;
}