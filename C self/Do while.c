#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i++);
        if(i<15)
       // continue;
       break;
    }while(0);
    return 0;
}