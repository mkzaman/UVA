#include<stdio.h>

int main()
{
    int t,i,s,d,a,b;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&s,&d);
        if(s<d)
        {
            printf("impossible\n");
        }
        else
        {
            a=(s+d)/2;
            b=a-d;


             if(a+b==s)
            {
                printf("%d %d\n",a,b);
            }
            else
            printf("impossible\n");
        }

    }
return 0;
}
