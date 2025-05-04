#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

int main() {
    size_t max_size = SIZE_MAX;

    printf("Max size_t value: %zu bytes (%.2f GB)\n", max_size, max_size / (1024.0 * 1024 * 1024));

    void *ptr = malloc(max_size);

    if (ptr == NULL) {
        perror("malloc failed");
    } else {
        printf("malloc succeeded\n");
        free(ptr);
    }

    return 0;
}

