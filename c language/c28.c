#include <stdio.h>
int main() {
    int marks[5], i, max;

    printf("Input marks\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    max = marks[0];

    for(i = 1; i < 5; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }

    printf("Maximum number = %d", max);

    return 0;
}