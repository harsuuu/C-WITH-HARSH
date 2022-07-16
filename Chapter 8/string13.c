#include<stdio.h>
#include<string.h>
int main(){

    char source[]="harsh";
    char target[30];
    strcpy(target,source);
    printf("now target will contain %s",target);   //yha target ki jgah source bhi likh skte hai

    
    return 0;
}