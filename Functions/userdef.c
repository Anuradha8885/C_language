#include<stdio.h>
void Greet(); 
void addition();
void add(int x,int y);
int  areaOfCircle(int r);
int main(){
    Greet(); 
    int a=40,b=50;
    addition();
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    add(a,b);
    add(50,50);
    int radius=5;
    int result=areaOfCircle(radius);
    printf("areaofcircle=%d\n",result);
    return 0;
}
void Greet(){ 
    printf("Good Morning\n");
}
void addition(){
    int a=10,b=20;
    printf("addition=%d\n",(a+b));
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void add(int x,int y){
    printf("add=%d\n",(x+y));
}
int  areaOfCircle(int r){
    return 3.142*r*r;
}