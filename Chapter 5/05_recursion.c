#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("The value of factorial %d is %d",a, factorial(a));      /* isme factorial (a), ye hai fuction call
                                                                     ab neeche dekho function defination m bhi 
                                                                     fuction call aa rha hai factorial(x_1) iska
                                                                     mtlb ye hai recursion basically jisme function 
                                                                     call hota rh use khte hai recursion*/
    return 0;
}
int factorial(int x){
    if (x==0 || x==1){
    return 1;
    }
    else {
        return x* factorial(x-1);
    }

}