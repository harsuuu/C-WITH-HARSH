 /* Print the following star pattern. The number of lines in the pattern 
 should be eual to the value to the entered by the user. The pattern 
 looks like this for n=4

 *
 **
 ***
 **** */
  
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j< i+1; j++)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}