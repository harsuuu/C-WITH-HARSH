#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[10];     
}; 
int main(){
    struct employee king= {10, 6969.69, "harsh"};

    printf("code is: %d\n",king.code);
    printf("salary is: %f\n",king.salary);
    printf("Name is: %s\n",king.name);


   
    return 0;
}