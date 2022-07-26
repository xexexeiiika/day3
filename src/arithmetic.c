#include <stdio.h>

int main(){
    int x, y;
    char q;
    if(scanf("%d%lc", &x, &y) && ((q == '\n') || (q == ' ')))
    {
        if(scanf("%d%c", &y, &q) && ((q == '\n')))
        {
            printf("%d %d %d %d", x+y, x-y, x*y, x/y);
        }
        else{
            printf("n/a\n");
        }
    }
    else{
        printf("n/a\n");
    return 0;}
    }