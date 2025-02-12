#include <stdio.h>

int main(){
    int num1,num2;
    char character;
    scanf("%d%d",&num1,&num2);
    scanf(" %c",&character);
    switch(character){
    case '+': printf("%d",(num1+num2));
            break;
    case '-': printf("%d",(num1-num2));
            break;
    case '*': printf("%d",(num1*num2));
            break;
    case '/': printf("%d",(num1/num2));
            break;
    default: printf("error");
            break;
}
    return 0;
}