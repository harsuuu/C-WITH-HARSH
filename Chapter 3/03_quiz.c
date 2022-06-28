#include<stdio.h>

int main(){
     int marks;
     int A= 90-100;
     int B= 80-90;
     int C= 70-80;
     int D= 60-70;
     int F=70;
    printf("Enter your marks \n");
    scanf("%d\n", &marks);
    switch(marks) {
        case 1: 
              printf("your grade is A\n");
              break;
        case 2: 
              printf("your grade is B\n");
              break;
        case 3:
              printf("your grade is C\n");
              break;
        case 4:
              printf("your grade is D\n");
              break;
    }
    return 0;
}