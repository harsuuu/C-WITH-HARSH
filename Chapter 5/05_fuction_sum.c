#include<stdio.h>
 /*sum is fuction which takes a and b as input and return 
 an integer as an output*/
int sum (int a, int b);              // Fuction prototype

int main(){
    int c;
    c = sum (2,5);
    printf("The value of c is %d\n", c);     //fuction call
    return 0;
}
int sum (int a , int b){
int c;                                    //fuction defination
c = a+b;
return c; 
}