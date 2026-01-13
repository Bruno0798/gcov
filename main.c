#include <stdio.h>

void check_number(int build_type) {
    if (build_type > 0) {
        printf("Positive\n");
    } else {
        printf("Non-positive\n");
    }
}

int main() {
    check_number(10);
    return 0;
}
