#include<stdio.h>
int main()
{
    int inum=0,icount=0,j=0;
    puts("These are numbers that are not divisible by 3:");
    for(;inum<=100;inum++)
    {
        if(inum%3!=0)
        {
            icount++;j++;
            if(j<10) printf("%d,",inum);
            else {j=0;printf("%d\n",inum);}
         }
        else continue;
    }
    printf("\n一共有%d个数",icount);
    return 0;
}
