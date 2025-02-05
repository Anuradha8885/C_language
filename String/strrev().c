//strrev():returns reverse string.
#include<stdio.h>
#include<string.h>
int main(){
   char src[100]="Anuradha";
   //strrev(src);
   printf("with strrev()=%s\n",src);
   
   //without used strrev().
   printf("\n");
   printf("without used strrev()=");
   for (int i = 99; i >=0; i--)
   {
    printf("%c",src[i]);
   }
   return 0;
}