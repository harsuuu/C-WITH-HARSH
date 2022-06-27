#include<stdio.h>
#include<math.h>

int main(){
     int a = 10;
    int b = 20;
    int z; z= b*a;
    printf ("the value of a+b is %d\n", a+b);
    printf ("the value of a-b is %d\n", a-b);
    printf ("the value of a*b is %d\n", a*b);
    printf ("the value of a/b is %d\n", a/b);
    printf ("the value of z is %d\n",z);
    
    printf ("5 when devied by 2 leaves remainder of %d\n",5%2);
    printf ("-5 when devied by 2 leaves remainder of %d\\n", -5%2);
    printf ("5 when devied by -2 leaves remainder of %d\n", 5%-2);


    //  NO operator is assumed to be present khna ka mtlab is agr A multiple by B 
    // krna hai to A*B krna pdega aisa nhi ki maths jaise AB KR DO to computer ko smjh aa jayega

    printf ("the value of 4*5 is %d\n",4*5);     //valid
    printf ("the value of 4 into 5 is %d\n is",4.5);  // not valid iska anser 1 aayega jo ki galat hai lol😁

    printf ("the value of 4^5 is %d\n", 4^5); // There is no operator to perform exponentiation in c matlab 
                                              // agr hm 4 ki power 5 (4^5) krenge to answer 1 aayega jo ki galat hai obiously 
                                              // lekin agr hme krna hi hai to aise krenge...
    printf ("the value of 2 to the 5 is %f\n",pow(2,5));     // ab #include<math.h> aur add krna pdega librebary mai iske 
                                                             //jisse answer theek aa jayega

    printf("the value of 3+5 is %d\n",3+5);
    printf ("the value of 2.5 + 3 is %f\n", 2.5 + 3);
    printf("the value of 2.5 + 2.4 is %f\n",2.5 + 2.4);
    printf("the value of 2.5 + 2.5 is %f\n", 2.5 + 2.5);

    printf("the value of 5/2 is %d\n", 5/2); // answer is 2 because remainder is 2, jo ki galat hai.
    printf("the value of 5.0/2 is %f\n", 5.0/2); // they have float and int that's why we use "%f" not "%d"

    // quiz-quiz    example. k=3.0/9
    printf("the value of 3.0 / 9 is %f\n", 3.0/9);


    return 0;
}