#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int xa = -10000;
    int xb = 10000;
    int num = xa * xb;

    printf("Result of multiplication: %d\n", num);

    void *ptr = malloc(num);

    if (ptr == NULL) {
        perror("malloc failed");
    } else {
        printf("malloc succeeded\n");
        free(ptr);
    }

    return 0;
}
