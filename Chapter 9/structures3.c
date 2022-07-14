#include<stdio.h>
struct employee {
    int code;
    char name[10];
    int salary;      
}; 
int main(){
    struct employee e1,e2,e3;
   

    printf("Enter the code of employee 1st\n");
    scanf("%d",&e1.code);
    printf("Enter the name of employee 1st\n");
    scanf("%s",&e1.name);                                  // array m & lgao ya mt lgao chl jata
    printf("Enter the salary of employee 1st\n");
    scanf("%d",&e1.salary);

    printf("Enter the code of employee 2nd\n");
    scanf("%d",&e2.code);
    printf("Enter the name of employee 2nd\n");
    scanf("%s",&e2.name);
    printf("Enter the salary of employee 2nd\n");
    scanf("%d",&e2.salary);

    printf("Enter the code of employee 3rd\n");
    scanf("%d",&e3.code);
    printf("Enter the name of employee 3rd\n");
    scanf("%s",&e3.name);
    printf("Enter the salary of employee 3rd\n");
    scanf("%d",&e3.salary);


     printf("%d\n",e1.code);
     printf("%d\n",e1.salary);
     printf("%s\n",e1.name);

     printf("%d\n",e2.code);
     printf("%d\n",e2.salary);
     printf("%s\n",e2.name);

     printf("%d\n",e3.code);
     printf("%d\n",e3.salary);
     printf("%s\n",e3.name);
    return 0;
}