#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("harsh.txt","r");   
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n",num);
    fclose(ptr);
    return 0;
}