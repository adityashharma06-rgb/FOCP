#include<stdio.h>
int main()
 {
    int age;
    printf("entre your age:= ");
    scanf("%d",&age);
    if(age>=18)
    printf("you are eligible for giving vote :)");
    else
    printf("sorry you cant give vote");
    return 0;
}