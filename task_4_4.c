#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr;
    int i = 0;

    while (i++ < 3) {
        ptr = malloc(16);
        if (!ptr) {
            perror("malloc failed");
            exit(1);
        }

        printf("Using memory at iteration %d\n", i);
        ((char*)ptr)[0] = 'A';

        free(ptr);
    }

    return 0;
}

