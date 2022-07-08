#include<stdio.h>

int main(){
    float c=10.5;
    float *a = &c;
    printf("the value of %u\n",a);
    a++;
    printf("the value of %u\n",a);
    return 0;
}