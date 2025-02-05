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
int main(){
    int total=1;
    int num=1221;
    while (num!=0)
    {
        int temp=num ,fnum,snum;
        fnum=temp/10;
        while (fnum="%d\n",fnum)
        {
            fnum=fnum/10;
        }
        printf("fnum=%d\n",total);
        total=num%10;
        printf("total=%d\n",total);
        if (fnum==total)
        {
            printf("palindrom");
        }
       else{
        printf("not palindrom");
        
       }
       return 0;
    }
}