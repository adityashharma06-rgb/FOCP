#include<stdio.h>
int main() {
    int unit;
    printf("enter your unit:");
    scanf("%d",&unit);
    if ( unit>=0 && unit<=100)
    printf("$2/unit");
    else if(unit>=101 && unit<=200)
    printf("$3/unit");
    else
    printf("$5/unit");
    return 0;
}