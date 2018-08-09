#include<stdio.h>

int main()
{
    char name[100],a;
    float grade[100],b;
    int i,j,k,h;
    printf("请输入姓名和成绩\n");
    printf("(输入完毕后请输入0)\n");
    for(i=0;i<100;i++)
    {
        scanf("%s",&name[i]);
        if(name[i]=='0')
        {i--;break;}
        else scanf("%.1f\n",&grade[i]);
    }
    
    for(k=0;k<i;k++)
    {    for(j=i;j>k;j--)
        {
            if(grade[k]<grade[j])
            {
                b=grade[k];
                grade[k]=grade[j];
                grade[j]=b;
                a=name[k];
                name[k]=name[j];
                name[j]=a;
            }
        }
    }
    printf("学生名次为:\n");
    for(h=0;h<=i;h++)
        printf("第%d名\t%s\n",h+1,name[h]); 
    return 0;
}
