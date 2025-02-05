#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    //add
    int c=a+b;
    printf("c=%d\n",c);
    printf("sum=%d\n",a+b);
    
    //sub
    printf("sub=%d\n",a-b);

    //multi
    printf("multi=%d\n",a*b);

    //div
    printf("div=%d\n",b/a);

    //mod
    printf("mod=%d\n",b%a);

    //increament
    int i=20;
    printf("i=%d\n",i);
    i++; // i=a+1
    printf("i++=%d\n",i);

    //decreament
    int h=10;
    printf("h=%d\n",h);
    h--; //h=h-1
    printf("h=%d\n",h);
    return 0;

}