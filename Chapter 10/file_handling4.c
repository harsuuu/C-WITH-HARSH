#include<stdio.h>

int main(){
    FILE *ptr;
    int num= 69;
    ptr=fopen("generted","w");
    fprintf(ptr,"the number is %d",num);
    fclose(ptr);
    return 0;
}