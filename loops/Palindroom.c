#include <stdio.h>
int main() {
    int num, re = 0, remainder, orNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    orNum = num;  
    while (num != 0) {
        remainder = num % 10;  
        re = re * 10 + remainder;  
        num /= 10;  
    }
    if (orNum == re) {
        printf("%d is a palindrome.\n", orNum);
    } else {
        printf("%d is not a palindrome.\n", orNum);
    }
    return 0;
}
