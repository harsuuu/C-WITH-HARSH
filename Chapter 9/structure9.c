/*#include<stdio.h>
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
    
    ptr->code =10;      
    ptr->salary = 169.69;
    strcpy(ptr->name, "harsh");

   printf("%d\n",e1.code);
   printf("%f\n",e1.salary);
   printf("%s\n",e1.name);
  
    return 0;
}*/
                    /*NOW WE WILL LEARN HOW TO TYPEDEF*/

#include<stdio.h>
#include<string.h>
typedef struct employee {                                 //typedef likh liya struct employee k aage
    int code;
    float salary;   
    char name[10];
     
}emp;                                                       /*yha emp likh diya means hmne struct employee of "emp" se 
                                                             typedeft kr diya ab hm struct employe ki jgah emp likh skte*/
                                                             
int main(){
    emp e1;                                               // yha
    emp *ptr;                                             // yha bhi than run  
    ptr=&e1;
    
    ptr->code =10;      
    ptr->salary = 169.69;
    strcpy(ptr->name, "harsh");

   printf("%d\n",e1.code);
   printf("%f\n",e1.salary);
   printf("%s\n",e1.name);
  
    return 0;
}                    