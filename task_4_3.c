#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = malloc(0);

    if (ptr == NULL) {
        printf("malloc returned NULL\n");
    } else {
        printf("malloc returned a non-NULL pointer\n");
        free(ptr);
    }

    return 0;
}

