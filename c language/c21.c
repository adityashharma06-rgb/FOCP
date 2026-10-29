#include <stdio.h>
int main() {
    int marks;
    printf("entre marks:");
    scanf("%d",&marks);

    if(marks<30)
    printf("C");

    else if(30<= marks <70)
    printf("B");

    else if(70<= marks <90)
    printf("A");
    
    else if (90<= marks <=100)
    printf("A+");

    else 
    printf("fail!!!!");

    return 0;
}
