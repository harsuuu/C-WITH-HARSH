#include<stdio.h>

int main(){
    int marks[4];
    int *a=&marks[0];
    a=&marks[0];
    for(int i=0; i<4; i++)
    {
        printf("Enter the value of student %d: \n", i+1);
        scanf("%d", a);
        a++;
    }
     for(int i=0; i<4; i++)
    {
        printf("The marks of student %d is %d: \n", i+1, marks[i]);
    }

    return 0;
}