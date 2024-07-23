#include<stdio.h>
int main(){
    int a=1;
    int b=1;
    int c= a||--b;
    int d= a-- && --b;
    printf("a = %d,b=%d",a,b);
    printf("c=%d,d=%d",c,d);
    return 0;
}