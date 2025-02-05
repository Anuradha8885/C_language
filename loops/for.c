//print 1 to 10:
/*#include<stdio.h>  
int main(){  
int i=0;        
for(i=1;i<=10;i++){      
printf("%d \n",i);      
}     
return 0;  
}  */

//print table:
#include<stdio.h>
int main(){
    int num,i;
    printf("enter the value");
    scanf("%d",&num);
    for ( i = 1; i<=10; i++)
    {
        printf("%d\n",num*i);
    }
    
}
