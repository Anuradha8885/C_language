//Adition of the total number
#include<stdio.h>
int main(){
    //dynamic Array
    int size=10;
    int i,dyn_arr[10];
    int sum=0;
    /*printf("Enter the number:");
    scanf("%d",&dyn_arr);*/
    for ( i = 0; i <= 10; i++)
    {
        printf("Enter the number:");
        scanf("%d",&dyn_arr[i]);
        sum+=dyn_arr[i];
    }
     for( i = 0; i <=10; i++)
        {
        printf("dyn_arr[%d]=%d\n",i,dyn_arr[i]);  
    }
    printf("addition of the total number:%d\n",sum);
    return 0;
}

