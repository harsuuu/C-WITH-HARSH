#include<stdio.h>
 int factorialRecursive(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n * factorialRecursive(n-1);
        
        }
        }
int main(){
     int n;
    printf("Enter the value of number of factorial\n");
    scanf("%d", &n);
      int factorial = factorialRecursive(n);
        printf("The value of factorial is %d\n", factorial);

    return 0;
}