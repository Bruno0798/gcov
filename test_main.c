#include <assert.h>
#include <stdio.h>
#include "math_utils.h"

int main() {
    printf("Running tests...\n");
    assert(add(2, 3) == 5);
    printf("Tests passed!\n");
    return 0;
}
