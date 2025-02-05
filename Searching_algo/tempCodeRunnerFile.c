#include<stdio.h>
int main(){
     int arr[5]={1,9,17,18,54};
     int key=18;
     int size=5;
     int flag=0;
     int low=0;
     int high=size-1;

     while (low<=high)
     {
        printf("inside loop\n"); 
        int mid=(low+high)/2;
        printf("mid=%d\n",mid);

        if (key==arr[mid])
        {
          printf("element found! arr[%d]=%d\n",mid,arr[mid]);
          flag=1;
          break;
        }else if(key>arr[mid]){
          low=mid+1;
          printf("low=%d\n",low);
          high=high;
          printf("high=%d\n",high);
        }else{
          low=low;
          printf("low=%d\n",low);
          high=mid-1;
          printf("high=%d\n",high);
        }
        }
        if (flag==0)
        {
          printf("element not found!\n");
        }
        printf("exit\n");
        return 0;
     }
    