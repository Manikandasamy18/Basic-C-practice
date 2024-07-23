#include<stdio.h>
int main(){
    char arr[]={'a','b'};
    char *p=arr;
    if(&p==&arr){
        printf("Same");
    }
    else{
        printf("Not same");
    }
    return 0;
}