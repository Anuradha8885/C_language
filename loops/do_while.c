/*#include <stdio.h>  
int main() {  
int i = 1;  
do {  
printf("%d\n", i);  
i++;  
} while (i<= 5);  
return 0;  
}  */

#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the value\n");
    scanf("%d",&num);
    do
    {
        printf("%d\n",num*i);
        i++;
    } while (i<=10);
    
}