#include<stdio.h>
#include<string.h>

int main(){
    char str1[10]="harsh";
    char str2[10]="harsa";
    int a= strcmp(str1,str2);
    printf("%d",a);
    return 0;
}