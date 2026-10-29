#include<stdio.h>
int main(){
    int a,b,c;
    printf("entre a=");
    scanf("%d",&a);
    printf("entre b=");
    scanf("%d",&b);
    printf("entre c=");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("a is the greatest");
    else if (b>a && b>c)
    printf("b is the greatest");
    else if(c>a && c>b)
    printf(" c is the greatest");
    return 0;
}