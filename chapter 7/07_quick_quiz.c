#include<stdio.h>

int main(){
    int marks[5];

    for(int i=0; i<5; i++)
    {
    printf("Enter the marks for student is %d\n", i+1);          // yha %d means h 0,1,2,3,4 phir i+1 se ye 1,2,3,4,5 jo jayega
    scanf("%d",&marks[i]);
    }
    
    for(int i=0; i<5; i++)
    {
    printf("The marks for student %d is %d\n",i+1, marks[i]);
    }
    return 0;
}