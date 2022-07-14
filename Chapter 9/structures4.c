#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    char name[10];
    float salary;     
}; 
int main()
{
    struct employee facebook[100];
    facebook[0].code=1;
    facebook[0].salary=10;
    strcpy(facebook[0].name,"harsh");

    facebook[1].code=2;
    facebook[1].salary=20;
    strcpy(facebook[1].name,"madhav");

    facebook[2].code=2;
    facebook[2].salary=20;
    strcpy(facebook[2].name,"aarav");

    printf("done");
    return 0;
}