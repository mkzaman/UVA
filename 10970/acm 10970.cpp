#include<stdio.h>


int main()
{
    int m,n,c;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m<=0||n<=0)
        {
            c=0;
            printf("%d\n",c);
        }
        else
        {
            c=(m*n)-1;
            printf("%d\n",c);

        }
    }
return 0;
}
