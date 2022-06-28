#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d\n", &rating);
    switch(rating) {
        case 1: 
              printf("your rating is Acchi\n");
              break;
        case 2: 
              printf("your rating is behtreen\n");
              break;
        case 3:
              printf("your rating is good\n");
              break;
        case 4:
              printf("your rating is better\n");
              break;
        case 5:
              printf("your rating is best\n");
              break;
        default :
              printf("invalid rating");
              break;
    }
    return 0;
}