/*
* && and
* 0 0 = 0
* 1 0 = 0
* 0 1 = 0
* 1 1 = 1
* || or(Addition)
* 0 0 = 0
* 0 1 = 1
* 1 0 = 1
* 1 1 = 1
*/
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=10;
    //&&
    printf("a<b && b>c %d\n",a<b && b>c);
    //||
    printf("a<b || b<c %d\n ",a<b||b<c);
    //!
    //printf("a<b || b<c %d\n ",a<b||b<c);
    printf("!(a!=b && a<b) :%d\n",!(a!=b && a<b));
    return 0;
}