#include<stdio.h>
int main(){
    int arr[5]={5,4,6,9,1};
    printf("Enter the value to search:");
    int key,i;
    int flag=0;
    scanf("%d",&key);
    for ( i = 0; i <5; i++)
    {
        if (key==arr[i])
        {
           printf("Element at present at arr[%d]=%d\n",i,arr[i]);
        flag=1; 
        }
    }
    if (flag==0)
    {
        printf("Element is not present\n");
    }
    return 0;
}