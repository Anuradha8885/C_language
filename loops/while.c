/*#include <stdio.h>
int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    i=i+1;
  }
  return 0;
}*/

/*#include <stdio.h>
int main() {
  int num,i=1;
  printf("enter the value\n");
  scanf("%d",&num);
  printf("multiplication table %d\n",num);
  while (i<=10)
  {
    printf("%d*%d=%d\n",num,i,num*i);
    i++;

  }
  return 0;
}*/

#include<stdio.h>
int main(){
  int num,i=1;
  printf(" Enter the value");
  scanf("%d",&num);
  // printf("%d\n",num);
  while (i<=10)
  {
    printf("%d\n",num*i);
    i++;
  }
  
  return 0;
}