#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, inputNum;
    for (i = 1, inputNum = 0; i <= 5; i++) {
        printf("Enter %d inputNum: ", i);
        scanf("%d", &inputNum);
        if (inputNum == 5)
            break;
    }

    return 0;
}
