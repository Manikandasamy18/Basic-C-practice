#include<stdio.h>
char* getString(){
    char* str = "Mani";
    return str;
}
int main(){
    printf("%s",getString());
    return 0;
}