#include<stdio.h>

int main(){
    int x=2;
    int y=3;
    printf ("the value of 3*x + 5*y is %d\n", 3*x + 5*y);

    printf ("the value of 8*y/3*x is  %d\n", 8*y/3*x); 
    // the answer is "16" not "4"
    // first step 8*3=24
    // secod step 24/3=8
    // 3d step 8*2 = 16
    //  that is answer 


    return 0;
}
