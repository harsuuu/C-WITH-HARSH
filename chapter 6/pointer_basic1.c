#include<stdio.h>

int main(){
    int i=34;
    int *j =&i;         //j will store of address of i
    printf("address of i is %u\n",&i);
    printf("address is %u\n",j);
    printf("address of j is %u\n",&j);
    printf("value of i is %d\n",i);
    printf("value i  =%d\n",*(&i));
    printf("value is %d\n",*j);

    return 0;
}