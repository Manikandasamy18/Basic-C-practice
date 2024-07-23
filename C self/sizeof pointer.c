#include<stdio.h>
int main(){
    char arr[]={1,2,3};
    char *p=arr;
    printf("%d",sizeof(p));
    printf("%d",sizeof(arr));
    return 0;
}