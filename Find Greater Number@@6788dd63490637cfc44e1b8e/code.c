#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d%d",&num1,&num2);
    if(num1 > num2){
        printf("%d",num1);
    }
    else if(num1 < num2){
        printf("%d",num2);
    }
    else{
        printf("%d",0);
    }
    return 0;
}