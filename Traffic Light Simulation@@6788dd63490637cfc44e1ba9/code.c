#include <stdio.h>

int main(){
    char alphabet;
    scanf("%c",&alphabet);
    if(alphabet==R){
        printf("Stop";)
    }
    else if(alphabet==G){
        printf("Go");
    }
    else if(alphabet==Y){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}