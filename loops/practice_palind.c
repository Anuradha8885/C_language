/*#include<stdio.h>
int main(){
    int total=1;
    int num=123;
    while(num%10!=0){
        int temp=num;
        total=num%10;
        printf("%d",total);
        temp=temp/10;
        num=temp;
    }
    while(total<=3)
        {
            printf("%d",total);
            total++;
        }
        return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int total=0;
    int num=1221;
    while (num!=0)
    {
        int temp=num ,fnum,snum;
        fnum=temp/10;
        while (fnum%10!=(temp%10))
        {
            fnum=fnum/10;
        }
        printf("fnum=%d\n",fnum);
        total=num%10;
        printf("total=%d\n",total);
        if (fnum==total)
        {
            printf("palindrom");
        }
       else{
        printf("not palindrom");
        exit(0);
        
       }
       return 0;
    }
}