#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    for(int i = 1; i <= m ; i++){
        for(int j = 1; j <=m ; j++){
            if(i==2 && j == 2){
                printf(" ");
            }
            else{
            printf("*");
            }
        }
        printf("\n");
    }
return 0;
}