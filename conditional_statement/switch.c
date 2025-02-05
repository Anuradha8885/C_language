#include<stdio.h>
int main()
{
    printf("select the department\n");
    printf("1.computer\n");
    printf("2.AI\n");
    printf("3.electrical\n");
    printf("select the department");
    int department;
    scanf("%d", &department);
    switch(department){
        case 1: { 
            printf("computer\n");
            printf("enter A Div-a\n");
            printf("enter B Div-b\n");
            printf("select the option\n");
            char i,temp;
            scanf("%c",&temp);
            scanf("%c",&i);
            switch (i)
            {
            case 'A':{
                printf("class teacher is mayuri mam");
            }
                break;
            case 'B':{
                printf("class teacher is prajwal sir");
            }break;
            default:{
                printf("invalid input");
            }
                break;
            }
        }
        break;
       case 2: { 
            printf("AI\n");
            printf("enter A Div-a\n");
            printf("enter B Div-b\n");
            printf("select the option\n");
            char i,temp;
            scanf("%C",&temp);
            scanf("%c",&i);
            switch (i)
            {
            case 'A':{
                printf("theory");
            }
                break;
            case 'B':{
                printf("Practical");
            }
            break;
            default:{
                printf("invalid input");
            }
                break;
            }
        }
        break;
       case 3: { 
            printf("electrical\n");
            printf("enter A Div-a\n");
            printf("enter B Div-b\n");
            printf("select the option\n");
            char i,temp;
            scanf("%c",&temp);
            scanf("%c",&i);
            switch (i)
            {
            case 'A':{
                printf("Morning Batch");
            }
                break;
            case 'B':{
                printf("Evening Batch");
            }break;
            default:{
                printf("invalid input");
            }
                break;
            }
        }
        break;
    }
}