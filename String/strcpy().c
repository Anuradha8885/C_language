#include<stdio.h>
#include<string.h>
int main(){
//strcpy() :copies content of src string into dest string;
    char src[100]="copies the contents of source string to destination string.";
    char dest[100];
    strcpy(dest,src);
    printf("dest=%s\n",dest);

    //without strcpy()
    int size=100;
    char src1[100]="copies the contents of source string to destination string.";
    for(int i=0;i<size;i++){
        printf("%d ",src1[i]);
    }
    char dest1[100];
    for(int i=0;i<size;i++){
        if(src1[i]!=0){
            dest1[i]=src1[i];
        }
    }
    printf("without strcpy() dest1 string=%s\n",dest1);
    return 0;
}