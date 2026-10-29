#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,s,result;
    printf("input any value a=\n");
    scanf("%d",&a);
    printf("input any value b=\n");
    scanf("%d",&b);
    printf("input any value c=\n");
    scanf("%d",&c);
    printf("input any value s=\n");
    scanf("%d",&s);
    result=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("result is %d",result);
    return 0;
}