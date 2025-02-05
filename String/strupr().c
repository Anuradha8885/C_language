//strupr(): All the character are return in upper case.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="welcome";
    //strupr(str);
    printf("with strupr()=%s\n",str);

    //without used strupr().
    for(int i=0;i<100;i++){
        if(str[i]!=0){
            str[i]=(str[i]-32);
        }
    }
    return 0;
}