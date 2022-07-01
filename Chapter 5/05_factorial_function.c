#include<stdio.h>
void factorial(int num);

int main(){
   int a;
   printf("Enter the value of a");
   scanf("%d",&a);
   factorial(a);
    return 0;
}
void factorial(int num)
{
    int i, fact=1;
    if (num==0){
        printf("the factorial of 0 is 1");
         }
    else{
        for(i=1; i<=num; i++)
        {
            fact= fact*i;                           // ab isme "i"(fact*i= 1*1*2*3*4*5 "agr 5 hai num to") ki values jo aayegi bo fact(fact hmne 1 mana hai) se multiple hoti rhengi
        }
        printf("factoril of %d is %d", num,fact);
    }
    }
