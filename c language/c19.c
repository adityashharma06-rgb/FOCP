#include <stdio.h>
int main(){
    int i;
    printf("input any number=");
    scanf("%d",&i);
    
        for (; i >= 1; i--)
    {
       fact=fact*i;
    }
    printf("factorial os %d",fact);
    return 0;
}