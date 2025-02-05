/*#include<stdio.h>
int main(){
    int i,j,h;
    printf("Enter the value of h:");
    scanf("%d",&h);
    for ( i = 1; i<=h; ++i)
    {
        for ( j = 1; j<=i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int i,j;
    for( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5-i; j++)
        {
            printf(" ");
        }
        for ( j= 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*#include<stdio.h>
int main(){
    int i,j;
    for ( i = 5; i>=0; i--)
    {
        for ( j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
   return 0; 
}*/

/*#include<stdio.h>
int main(){
    int n=5;
    int i,j;
    for ( i = 1; i<=n; i++)
    {
        for ( j=n; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/