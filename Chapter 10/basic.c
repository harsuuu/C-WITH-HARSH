#include<stdio.h>

int main(){
    FILE *ptr;
  //  ptr = fopen("harsh.txt","r");   --> for reading the file
    ptr = fopen("harsh.txt","w");   //--> for writing the file
    return 0;
}