//concats or joins first string with second string. The result of the string is stored in first string.
#include<stdio.h>
#include<string.h>
int main(){
    char src[100]="first_name";
    char dest[100]="last_name";
    strcat(src,dest);
    printf("concatenated string with strcat()=%s\n",src);

    //without used strcat().
    char result[100];
    for (int i = 0; i < 100; i++)
    {
        if (src[i]!=0)
        {
            result[i]=src[i];
        }
        if(src[i]==0){
            if(dest[i]!=0){
                result[i]=dest[i];
            }
        }
    }
    printf("without strcat()=%s\n",result);
    
    char src1[100]="first Name.";
    //scanf("%s",&src3);
    char dest1[100]="Last name.";
    for(int i=0;i<100;i++){
        if(src1[i]==0){
            if(dest1[i]!=0){
                src1[i]=dest1[i];
            }
        }else{
            printf("continue");
            continue;
        }
    }
    printf("without strcat()=%s\n",src1);

}
