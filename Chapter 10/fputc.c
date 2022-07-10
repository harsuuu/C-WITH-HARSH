#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("bro.txt","w");
    putc('h',ptr);
    fclose(ptr);
    return 0;
}

/* agr hum 3 character
dalna chahte hai to hm putc 
ko 3  bar kr denge 
aise -->
putc('h',ptr);
putc('p',ptr);
putc('j',ptr);

aise krke 3 character aa jayenge
bro.txt file m */ 