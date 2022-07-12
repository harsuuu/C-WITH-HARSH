#include<stdio.h>

int main(){
    char name1[10];
    char name2[20];
    int  salary1;
    int  salary2;
    printf("Enter the name 1\n");
    scanf("%s", &name1);
    printf("Enter the salary of name1\n ");
    scanf("%d",&salary1);
    printf("enter the name 2\n");
    scanf("%s", &name2);
    printf("enter the salary of name 2\n");
    scanf("%d",&salary2);
    FILE *ptr;
    ptr = fopen("name.txt", "w");
    fprintf(ptr, "%s,%s,%d,%d",name1, name2, salary1, salary2);
    fclose(ptr);
    
    return 0;
}