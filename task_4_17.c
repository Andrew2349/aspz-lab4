#include <stdio.h>
#include <stdlib.h>

int main() {
    void *small_ptr = malloc(1024);
    if (small_ptr)
        printf("Small allocation (1 KB) succeeded.\n");
    else
        printf("Small allocation failed.\n");

    void *large_ptr = malloc((size_t)1024 * 1024 * 1024 * 10);
    if (large_ptr)
        printf("Large allocation (10 GB) succeeded.\n");
    else
        printf("Large allocation failed.\n");

    free(small_ptr);
    free(large_ptr);

    return 0;
}

