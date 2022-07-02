#include<stdio.h>
int sum(int a , int b);

int main(){
    int c=sum(3,4);             //means x=3; and y=4;
    int x=3;
    int y=4;
    printf("the sum of 3 and 4 is %d\n", sum(3,4));
    printf("the value of x and y is is %d and %d\n", x , y);
    return 0;

}
int sum(int a , int b)
{
int c;
c= a+b;
a= 52;            /*ab hm yha kuch bhi likh de a and b ki values lekin kuch bhi farak nhi pdega 
                  qki uper se 3 and 4 copy hokr int "a" and int "b" m aa gya hai*/                   
b=23;

return c;
}