#include<stdio.h>

int main(){
    int a;
    int b, *p, *q, sum;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d",&b);

   p=&a;
   q=&b;

   sum= *q + *p;

    printf("%d\n",sum);
    return 0;
}
