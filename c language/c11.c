#include <stdio.h>
int main() {
    int n;
    printf("input number=");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        default:
        printf("wrong input");

    }
    return 0;
}