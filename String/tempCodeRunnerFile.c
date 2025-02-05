//strcmp():compare to string equal to not.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="Hello";
    char str2[50]="Helloo";
    //printf("with strcmp():%d\n",strcmp(str1,str2));

    //with used strcmp().
    int val=-1;
    for(int i=0;i<=100;i++){
        if(str1[i]==str2[i]){
            val=0;
        }else{
            val=-1;
        }
    }
    if(val=0){
    printf("string are equal.\n");
  }else{
    printf("string are not equal.\n");
  }
  return 0;
}