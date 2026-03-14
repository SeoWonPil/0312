#include <stdio.h>

int main() {
    char str[100];

    printf("문자열 입력: ");
    gets_s(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        // 대문자 -> 소문자
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        // 소문자 -> 대문자
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("변환 결과: %s", str);

    return 0;
}