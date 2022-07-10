/* #include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("harsh.txt","r");
    if(ptr == NULL){
        printf("the file does not exist");
    }   
    else{
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    printf("the value of num is %d\n",num);
    }
 
    return 0;
}

output --> the value of num is 69 */

 #include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("harsh3.txt","r");
    if(ptr == NULL){
        printf("the file does not exist");
    }   
    else{
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    printf("the value of num is %d\n",num);
    }
 
    return 0;
}
 //ouptput --> the file does not exist beacause we do not have file "harsh3.txt"