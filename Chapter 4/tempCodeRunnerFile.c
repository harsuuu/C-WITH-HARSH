#include<stdio.h>

int main(){
    int a;
    int b=0;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    do{
        printf("the value of a is %d\n",b+1);
        b++;
    }
    while(b<a);
    
    return 0;
}