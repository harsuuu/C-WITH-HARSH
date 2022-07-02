#include<stdio.h>
void swap(int*a , int*b);

int main(){
    int x=5;
    int y=6;
    printf("the value of a and b is %d and %d", x , y);
     swap(&x, &y);    /*will work due to call by reference qki isme "&" ye aa
                        gya and address store krta hai*/
    printf("after swaping the value of a and b is %d and %d", x, y);
    return 0;
}
void swap(int*a , int*b)
{
int temp;
temp =*a;
*a = *b;
*b = temp;
}