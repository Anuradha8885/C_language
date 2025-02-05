// #include<stdio.h>
// int main(){
//     int n=5;
//     int total=1;
//     for (int i = n; i >= 1; i--)
//     {
//         total=total*i;
//     }
//     printf("factorial of n=%d\n",total);
//     return 0;
// }

//Used in recursion Function.
#include<stdio.h>
int fact(int n);
int main(){
    int result=fact(5);
    printf("result=%d",result);
    return 0;
  }
    int fact(int n){
        if(n==1){
            return 1;
        }
        return n*fact(n-1);
 }
