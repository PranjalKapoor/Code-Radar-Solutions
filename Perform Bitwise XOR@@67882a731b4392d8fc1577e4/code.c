#include <stdio.h>

int main(){
    int num1,num2,XOR;
    scanf("%d%d",&num1,&num2);
    XOR = (num1 ^ num2);
    printf("%d",XOR);
    return 0;
}