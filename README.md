#include<stdio.h>
float Average(float grade[])
{  
    float a = grade[0];
    int b = 1;
    while(b<10)
    {    a+=grade[b];
        if(b=9) a=a/10;
        b++;
    }
    return a;
}

int main()
{    
    float Score[9],c;
    int i;
    for(i=0;i<10;i++)
    {    printf("Plase enter the score:\n");
        scanf("%f\n",Score[i]);
    }
    c=Average(Score);
    printf("the average score is %.1f",c);
    return 0;
}
