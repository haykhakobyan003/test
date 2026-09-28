#include <stdio.h>

int main() {
    int num[4];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    int max = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
