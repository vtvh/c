#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main() {
    int i;
    for (i = 0; i <= MAX; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d\t", i);
    }

    return 0;
}
