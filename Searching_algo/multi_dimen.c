/*#include<stdio.h>
int main(){
    int row_size=3;
    int col_size=3;
    int rs[3][3]= {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
      for(int  i = 0; i < row_size; i++)
      {
        for (int j = 0; j<col_size; j++)
        {
            printf("%d ",rs[i][j]);
        }
        printf("\n");
      }
        return 0;
}*/

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
            printf("%d",mat[i][j]);  
        }
        printf("\n");  
    }
    return 0;
}