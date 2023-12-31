#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int front, int rear) {
    if (front >= rear) {
        return 1;
    }

    if (str[front] != str[rear]) {
        return 0;
    }

    return isPalindrome(str, front + 1, rear - 1);
}

int main() {
    char word[] = "rotor";
    int length = strlen(word);
    printf("%d\n", isPalindrome(word, 0, length - 1));
    return 0;
}
