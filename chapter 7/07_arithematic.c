#include<stdio.h>

int main(){
    int c=10;
    int *a = &c;
    printf("the value of %u\n",a);
    a++;
    a++;
  //  a= a+1;       bat same hoti hai a++ aur a=a+1
    printf("the value of %u\n",a);
    return 0;
}