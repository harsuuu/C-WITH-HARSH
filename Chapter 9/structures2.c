#include<stdio.h>
struct employee {
    int code;
    char name[10];
    int salary;      
}; 
int main(){
    struct employee e;
    e.code;
    e.salary;
    e.name;

    printf("Enter your code\n");
    scanf("%d",&e.code);
    printf("Enter your name\n");
    scanf("%s",&e.name);
    printf("Enter your salary\n");
    scanf("%d",&e.salary);



    printf("%d\n",e.code);
    printf("%d\n",e.salary);
    printf("%s\n",e.name);
    return 0;
}