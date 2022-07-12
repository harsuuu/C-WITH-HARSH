#include<stdio.h>

int main(){
   
    FILE *ptr;
     int num;
    printf("Enter the interger that table you want to see\n");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");
    for(int i=0; i<10; i++)
        fprintf(ptr, "%d * %d = %d\n", num , i+1, num*(i+1));            // isme phla %d --> num k liye , second %d --> i+1 , third --> num*(i+1) k liye
        fclose(ptr);
    return 0;
}