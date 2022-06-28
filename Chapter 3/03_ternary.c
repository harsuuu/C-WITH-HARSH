#include<stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d\n", &a);
    // one liner
    (a<5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}