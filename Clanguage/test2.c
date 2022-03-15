#include <stdio.h>
int main(){
    char str[100];
    for(int i=0;i<=99;i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n'){
            break;
        }
    }
    for(int i=0;str[i]!='\0';i++){
        if(i%2==1){
            printf("%c",str[i]);
        }
        else if(str[i]%2==0){
            printf("%c",str[i]);
        }
    }
}


