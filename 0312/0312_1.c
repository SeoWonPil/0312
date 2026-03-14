#include <stdio.h>

int main() {
    float num;
    unsigned int bits;

    printf("입력값 : ");
    scanf_s("%f", &num);

    bits = *(unsigned int*)&num;

    printf("출력값 : ");

    // 부호
    printf("%d/", (bits >> 31) & 1);

    // 지수 (8비트 → 4비트씩)
    for (int i = 30; i >= 23; i--) {
        printf("%d", (bits >> i) & 1);
        if (i == 27) printf(" ");
    }

    printf("/");

    // 가수 (23비트)
    int count = 0;
    for (int i = 22; i >= 0; i--) {
        printf("%d", (bits >> i) & 1);
        count++;

        if (count % 4 == 0 && i != 0) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}