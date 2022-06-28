#include<stdio.h>

int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d\n", &age);
    if(age>=90){
       printf("You are above 90 you can not drive\n");
    }
    else{
         printf("You can drive\n");
    }

    if(age==50){
        printf("Half centuary\n");
    }
    return 0;
}