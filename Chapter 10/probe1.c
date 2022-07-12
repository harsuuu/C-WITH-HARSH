#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    FILE *ptr;
    ptr = fopen("fuck.txt", "r");
    fscanf(ptr, "%d %d %d", &a,&b,&c);
    printf("the value of a,b and c is %d %d %d\n", a , b,c);
    fclose(ptr);
    return 0;
}