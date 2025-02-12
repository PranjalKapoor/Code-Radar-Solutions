#include <stdio.h>

int main(){
    int num1,num2;
    char character;
    scanf("%d%d",&num1,&num2);
    scanf("%c",&character);
    if(character == '+'){
        printf("%d",(num1 + num2));
    }
    else if(character == '-'){
        printf("%d",(num1 - num2));
    }
    else if(character == '*'){
        printf("%d",(num1 * num2));
    }
    else if(character == '/'){
        printf("%d",(num1 / num2));
    }
    else{
        printf("Error");
    }
    return 0;

}