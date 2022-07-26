#include <stdio.h>

int main() {
    int maxNum, lastNum;
    char q;
    if (scanf("%d%c", &maxNum, &q) && ((q == '\n') || (q == ' '))) {
        if (scanf("%d%c", &lastNum, &q) && ((q == '\n'))) {
            if (maxNum > lastNum) {
                printf("%d", maxNum);
            }   else if (lastNum > maxNum) {
                printf("%d", lastNum);
            } else {
                printf("%d", maxNum);
            }
        } else {
            printf("n/a\n");
        }
    } else {
        printf("n/a\n");
    return 0;
    }
    }
