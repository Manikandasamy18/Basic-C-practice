#include<stdio.h>
int main(){
    char str[]="manikandasamy";
    char*s1=str;

    for(int i=0;i<4;i++){
        printf("%c",*str);
        s1++;
    }
    return 0;
}