#include<stdio.h>

int main(){
    int i=0;
    do{
        printf("The value of i is %d\n", i);
        if (i==4){
            break;
        }
        
        
        i++;
                          // ye do while loop hai hmne isme beech m 
                          // if lgakr break lgaya hai kisi bhi loop
                          // m break lga skte hai
    }while(i<10);
    return 0;
} 