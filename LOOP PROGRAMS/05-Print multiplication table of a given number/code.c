#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num != 0) {
        while (i <= 10) {
            printf("%d x %d = %d\n", num, i, num * i);
            i++;
        }
    } else {
        printf("Zero entered, multiplication table is trivial.\n");
    }

    return 0;
}
