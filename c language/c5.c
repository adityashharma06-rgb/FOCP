#include<stdio.h>
int main(){
    int age;
    printf("entre your age=");
    scanf("%d",&age);
    if(age>=18 && age<=70)
    printf("you are eligible for DRIVING");
    else
    printf("you are not eligible for DRIVING");
    return 0;
}