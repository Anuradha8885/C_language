//strlwr(): All the character are return in lower case.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="WELCOME";
    //strlwr(str);
    printf("with strlwr()=%s\n",str);

    //without used strlwr();
    for (int i = 0; i < 100; i++)
    {
        if(str[i]!=0){
            str[i]=(str[i]+32);
        }
    }
    printf("without strlwr()=%s\n",str);
    return 0;
}