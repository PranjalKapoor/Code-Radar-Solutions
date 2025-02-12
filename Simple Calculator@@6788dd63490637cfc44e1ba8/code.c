#include <stdio.h>

int main(){
    int num1,num2;
    char character;
    scanf("%d%d",&num1,&num2);
    scanf("%c",&character);
    printf("%d",(num1+num2));
    if(character == '-'){
        printf("%d",(num1-num2));
    }
    else if(character == '*'){
        printf("%d",(num1*num2));
    }
    else if(character == '/'){
        printf("%d",(num1/num2));
    }
    else{
        printf("error");
    }
    return 0;

}