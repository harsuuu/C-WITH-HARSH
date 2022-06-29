#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
     for (int i=n; i; i--){
         printf("The value of i is %d\n", i);
     }
    return 0;
}

//or

#include<stdio.h>

int main(){
    for ( int a=3; a; a--){
        printf("The value of a is %d\n" , a);
    }
     
     return 0;
}