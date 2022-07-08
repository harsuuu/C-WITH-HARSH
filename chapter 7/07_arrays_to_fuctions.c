#include<stdio.h>

void printArray (int *ptr , int n){
for(int i=0; i<n; i++)
{
    printf("the value of element %d is %d", i+1, *(ptr+i));
}
}
int main(){
    
}