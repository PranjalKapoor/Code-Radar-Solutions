#include <stdio.h>

int main(){
    int num1,num2;
    char character;
    scanf("%d%d",&num1,&num2);
    scanf("%c",&character);
    switch(character){
    case '+': 
            printf("%d",(num1+num2));
            break;
    case '-': 
            printf("%d",(num1-num2));
            break;
    case '*': 
            printf("%d",(num1*num2));
            break;
    case '/': 
            if(num2==0){
                 printf("%d",(num1/num2));}
            else{
                printf("%d",(num1/num2));
            }
}
    return 0;
}