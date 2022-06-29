#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    while(a<10){
        printf("%d\n",a);
        a++;
        
        /* isme ye hota jaise hmne output mai "a" ki 5  value dali theek 
           to ye while loop m aayega aur dekhega 5 , 10 se small hai mtlb 
           condtion true to ye 5 ko print kr dega theek hai phir a++ lga hai isliye 
           ab khud se a ki value 6 hogi jo loop m jayegii phir loop
           check krega ye condition true  hai 6, 10 se small hai to 
           bo ise bhi print kr dega aur ye value true hone tk print
           krta rhega lekin jb a++ ki bjah se value 10 hogi to phir loop
           m jayega check krega condition true hai ya nhi jb value 10 hogi 
           to condition  false ho qki 10, 10 se small nhi h equall hai
           isiye while loop condition false ho jaygi aur loop close mtlb agr hmne start
           a ki value 5 dali hogi to 5,6,7,8,9 run hokr loop close ho  
           jayegi */
    }
    return 0;
}