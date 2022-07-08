#include<stdio.h>

int main(){
    char c=10;
    char *a = &c;
    printf("the value of %u\n",a);
    a++;
    printf("the value of %u\n",a);
    return 0;
} 