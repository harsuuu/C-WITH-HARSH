#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("dj.txt","r");
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    fclose(ptr);
   
    return 0;
}
//fgetc is a function joki character by character read krta hai