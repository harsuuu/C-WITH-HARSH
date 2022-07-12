#include<stdio.h>

int main(){
    char c;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("test.txt", "r");
    ptr2 = fopen("aarav.txt", "w");

    c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c, ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
  return 0;
}