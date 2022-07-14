#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    char name[10];
    float salary;     
}; 
int main(){
    struct employee e;
    e.code= 100;
    e.salary = 1215.2;
    strcpy(e.name,"harsh");       


    printf("%d\n",e.code);
    printf("%f\n",e.salary);     //Note--> agr hme 3 point tk chaiye to "%.3f" ye krenge
    printf("%s\n",e.name);
    return 0;
}