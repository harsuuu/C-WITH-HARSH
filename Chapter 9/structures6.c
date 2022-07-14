#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;   
    char name[10];
     
}; 
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    
    (*ptr).code =10;       // you can write also like this ptr->code=100;
    (*ptr).salary = 169.69;
    strcpy((*ptr).name, "harsh");

   printf("%d\n",e1.code);
   printf("%f\n",e1.salary);
   printf("%s\n",e1.name);
  
    return 0;
}