#include<stdio.h>

int main(){
    int age;
    int vipPass =0;  // ye zero hi hota hai lekin
    vipPass = 1;     // 1 ho jata hai agr emergency aa jati hai to mtlb hm khud se dalenge

    printf("Enter the age\n");
    scanf("%d", &age);
    if ((age>=18 && age<=70) || vipPass==1){
        printf("You are above 18 and below 70, You can drive\n");
    }
    else{
        printf("You can not drive\n");

    }
    return 0;

    //NOTE- IN EVERY AGE THEY CAN DRIVE BECAUSE THEY HAVE VIPPASS, RUN KRKE CHECK KR LO
}