#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("harsh.txt","r");   
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);           // yha per bhi close kr skte hai
    printf("the value of num is %d\n",num);
    printf("the value of num is %d\n",num2);
 
    return 0;
} 