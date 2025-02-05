#include<stdio.h>
int main(){
    int r=3;
    int c=3;
    int mat[3][3];
    printf("Display the matrix:");
    for (int i= 0; i <r; i++){
        for (int j = 0; j<c; j++){
           scanf("%d",&mat[i][j]);
        } 
    };
    for (int i = 0; i <r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ",mat[i][j]);  
        }
        printf("\n");  
    }
    int key;
    int flag=0;
    printf("Enter the key value:");
    scanf("%d",&key);
    for (int i= 0; i <r; i++){
        for (int j = 0; j<c; j++){
           if (key==mat[i][j])
           {
            flag=1;
            printf("Element is present at mat[%d][%d]=%d\n",i,j,mat[i][j]);
           }
        } 
    }
    if (flag==0)
    {
        printf("Element is not present");
    }
    return 0;
}