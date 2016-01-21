//id:10346
//name:peter's smoke
//date:13/1/2012
//site:uva


#include<stdio.h>
int main()
{
    register unsigned long n,k,t,b;
    //freopen("in.txt","r",stdin);
    while(scanf("%lu%lu",&n,&k)==2)
    {
        t=b=0;
        while(n)
        {
            t=t+n;
            b=b+n;
            n=b/k;
            b=b%k;
        }
        printf("%lu\n",t);
    }
    return 0;
}
