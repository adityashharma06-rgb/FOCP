#include <stdio.h>
int main() {
    int sp, cp;
    printf("entre the sp=");
    scanf("%d",&sp);
printf("entre the cp=");
    scanf("%d",&cp);
    if(sp>cp)
    printf("you are in profit");
    else if (cp>sp)
    printf("you are in loss");
    else
    printf("no profit no loss");
    return 0;
}