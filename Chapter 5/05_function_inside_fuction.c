#include<stdio.h>
void goodmorning();
void goodAfternoon();
void goodNight();

int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("Good morning Harsh\n"); 
    goodAfternoon();
}
void goodAfternoon(){
    printf("Good afternoon Harsh\n");
    goodNight();

}
void goodNight(){
    printf("Good night Harsh\n");
}