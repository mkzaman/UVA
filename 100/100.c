//shuvo 5/8/2011
//name:the 3n+1 problem
//id:001 100

#include<stdio.h>

int main()
{
    unsigned long int i,j,n,a,b,x,p,q;


    while(scanf("%lu %lu",&i,&j)!=EOF)

    {
        p=i;
        q=j;
        if(i>j)
        {

            p=j;
            q=i;

        }


    for(n=p,b=0;n<=q;n++)
    {
        x=n;
        for(a=1;x!=1;a++)
        {
            if(x%2!=0)
            {
                x=3*x+1;
            }
            else
            {
                x=x/2;
            }
        }
        if(a>b)
        {
            b=a;
        }
    }

    printf("%lu %lu %lu\n",i,j,b);
    }


return 0;
}
