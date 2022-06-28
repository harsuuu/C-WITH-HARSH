#include<stdio.h>

int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age>=18 && age<=70){
        printf("You can drive\n");
    }
    else{
        printf("You can not drive\n");

    }

    return 0;
}