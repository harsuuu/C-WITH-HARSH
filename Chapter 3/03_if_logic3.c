#include<stdio.h>

int main(){
    int age;
    int vipPass=0;
    printf("Enter the age\n");
    scanf("%d", &age);
    if ((age>=18 && age<=70) || !(vipPass==1)){            // ab yha not lga diya "!"to kitne sal 
                                                           // baccha drive kr skta hai
        printf("You are above 18 and below 70,You can drive\n");
    }
    else{
        printf("You can not drive\n");

    }
    return 0;
}