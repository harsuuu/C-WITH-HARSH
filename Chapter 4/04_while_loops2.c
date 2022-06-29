#include<stdio.h>

int main(){
     int a;
    scanf("%d",&a);
        while(a>10){ 
        printf("%d\n",a);
        a++;
        }
        /* Ab agr hm isme a ki value 11 dale to while loop ki
           condtion har bar true hogi qki jb 11 hogi value mtlb 
           10 se great to print ho jaygi phir a++ ki bjah se value
           12,13,14,and so on.. hoti rhegi aur loop condition har 
           bar true hogi jisse infinite loop bn jayegi */

    return 0;
}