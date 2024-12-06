#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int num, revNum = 0, temp, digit;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindromeStr = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindromeStr = 0;
            break;
        }
    }

    if (isPalindromeStr) {
        printf("String is a palindrome.\n");
    } else {
        printf("String is not a palindrome.\n");
    }

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0) {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    if (temp == revNum) {
        printf("Number is a palindrome.\n");
    } else {
        printf("Number is not a palindrome.\n");
    }

    return 0;
}
