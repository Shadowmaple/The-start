#include<stdio.h>
#include<string.h>

void swap(char a[], char b[])
{
    char c[100];
    int i;
    int len1 = strlen(a);
    int len2 = strlen(b);
    for(i = 0; i < len1 ; i++)
        c[i] = a[i];
    c[i] = '\0';
    for(i = 0; i < len2; i++)
        a[i] = b[i];
    a[i] = '\0';
    for(i = 0; i < len1; i++)
        b[i] = c[i];
    b[i] = '\0';
}

int main()
{
    char name[100][100], a[100];
    float grade[100], b;
    int i, j, k, h;
    printf("请输入姓名和成绩\n");
    printf("(输入完毕后请输入0)\n");
    for(i=0; i<100; i++)
    {
        scanf("%s", name[i]);
        if(name[i][0] == '0')
        {i--;break;}
        else scanf("%f", &grade[i]);
    }
    
    for(k=0; k<i; k++)
    {    for(j=i-1; j>k;j--)
        {
            if(grade[k]<grade[j])
            {
                b = grade[k];
                grade[k] = grade[j];
                grade[j] = b;
                swap(name[k], name[j]);
            }
        }
    }
    printf("学生名次为:\n");
    for(h = 0; h < i; h++)
        printf("第%d名\t%s\n", h+1, name[h]); 
    return 0;
}
