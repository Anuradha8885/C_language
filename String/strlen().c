 //strlen() :returns the length of string.
 #include<stdio.h>
 int main(){
    // used strlen() function.
    char str[50]="welcome to string" ;
    printf("len of str=%d\n", strlen(str));
    printf("\n");


     //without strlen()
    int len=0;
    for(int i=0;i<=50;i++){
        if(str[i]!=0){
            len=len+1;
        }
    }
    printf("without strlen() size of string=%d\n",len);
    return 0;
 }