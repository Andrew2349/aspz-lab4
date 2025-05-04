#include <stdio.h>
#include <stdlib.h>

int main() {

    char *ptr1 = realloc(NULL, 100);
    if (ptr1) {
        printf("realloc(NULL, 100) succeeded\n");
        free(ptr1);
    } else {
        printf("realloc(NULL, 100) failed\n");
    }


    char *ptr2 = malloc(50);
    char *ptr3 = realloc(ptr2, 0);

    if (ptr3 == NULL) {
        printf("realloc(ptr, 0) returned NULL (memory freed)\n");

    } else {
        printf("realloc(ptr, 0) returned non-NULL (should still be freed)\n");
        free(ptr3);
    }

    return 0;
}

