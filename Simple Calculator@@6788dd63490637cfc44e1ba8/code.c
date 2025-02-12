#include <stdio.h>

int main(){
    int num1,num2;
    char character;
    scanf("%d%d",&num1,&num2);
    scanf("%c",&character);
    printf("%d",(num1+num2));
    printf("%d",(num1-num2));
    printf("%d",(num1*num2));
    printf("%d",(num1/num2));
    printf("error");
    return 0;

}