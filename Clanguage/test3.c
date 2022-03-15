#include<stdio.h>
#include<string.h>
typedef struct man{
    int tickets;
    char name[10];
} MAN;

int main(){
    MAN Li,Sun,Zhang;
    int num;
    char temp[10];
    strcpy(Li.name, "Li");strcpy(Sun.name, "Sun");strcpy(Zhang.name, "Zhang");
    Li.tickets=0;Sun.tickets=0;Zhang.tickets=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%s",temp);
        if(!strcmp(temp,Li.name)){
            Li.tickets++;
        }
        else if(!strcmp(temp,Sun.name)){
            Sun.tickets++;
        }
        else{
            Zhang.tickets++;
        }
    }
    printf("Li:%d\nZhang:%d\nSun:%d\n",Li.tickets,Zhang.tickets,Sun.tickets);
}

