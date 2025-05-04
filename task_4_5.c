#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t initial_size = 1024;
    size_t huge_size = (size_t)-1;

    char *ptr = malloc(initial_size);
    if (!ptr) {
        perror("Initial malloc failed");
        return 1;
    }

    printf("Initial allocation succeeded.\n");

    char *new_ptr = realloc(ptr, huge_size);
    if (!new_ptr) {
        perror("realloc failed");
        free(ptr);
    } else {
        printf("Realloc succeeded unexpectedly.\n");
        free(new_ptr);
    }

    return 0;
}

