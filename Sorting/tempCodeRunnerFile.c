/*#include<stdio.h>
int main(){
    int arr[5]={9,12,4,3,1};
    int n=5;
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for (int  i = 0; i < n; i++)
    {
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
                
            }
            
        }
       for (int i = 0; i < n; i++)
       {
        printf("%d ",arr[i]);
       }
       return 0; 
    }
    
    }
    
}*/

#include<stdio.h>
int main(){
    int arr[5]={9,12,4,3,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
    for(int i=0;i<n;i++){ // passes
        for(int j=0;j<n-i-1;j++){ //for unsorted element.
            if(arr[j]>arr[j+1]){
               //swapping
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
}