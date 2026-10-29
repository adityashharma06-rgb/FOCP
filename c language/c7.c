#include <stdio.h>
int main() {
    int a,b,c;
    printf("input side a=");
    scanf("%d",&a);
    printf("input side b=");
    scanf("%d",&b);
    printf("input side c=");
    scanf("%d",&c);
    if(a==b && b==c && a==c)
    printf("it is an equilateral triangle");
    else if (a!=b!=c)
    printf("it is a scalene triangle");
    else 
    printf("it is an isoceles triangle");
    return 0;
}