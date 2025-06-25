#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';  

    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    printf("Reversed string: %s\n", rev);

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}
