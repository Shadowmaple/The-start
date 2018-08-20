#include<stdio.h>
int Max(int num1,int num2);
int main()
{   
    int a,b,big;
    printf("Please enter the first number:\n");
    scanf("%d\n",&a);
    printf("Please enter the second number:\n");
    scanf("%d\n",&b);
    big = Max(a,b);
    printf("the bigger number is %d",big);
    return 0;
}

int Max(int n1,int n2)
{    
    int c;
    if(n1>n2)
        c = n1;
    else c=n2;
    return c;
}
