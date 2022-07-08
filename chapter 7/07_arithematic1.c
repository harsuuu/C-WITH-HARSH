#include<stdio.h>

int main(){
    int c=10;
    int *a = &c;
    printf("the value of %u\n",a);
   // a++;             bat same hoti hai a++ aur a=a+1
     a= a+2;           // isme +2 kra to 2 element add isliye 8 bytes add hogi
    printf("the value of %u\n",a);
    return 0;
}