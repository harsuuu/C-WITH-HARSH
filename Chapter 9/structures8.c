#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;   
    char name[10];
     
}; 
void show (struct employee e1){
    printf("the code of emloye is : %d\n",e1.code);
    printf("the code of emloye is : %f\n",e1.salary);
    printf("the code of emloye is : %s\n",e1.name);

}
int main(){
    struct employee e1;
    e1.code=10;
    e1.salary=169.69;
    strcpy(e1.name,"harsh");
   
   show(e1);
    return 0;
}