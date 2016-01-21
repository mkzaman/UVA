#include<stdio.h>
#include<string.h>



int love(char );

int main()
{
    char a[26],b[26];
    int x,y,i,s1,s2,p,q;
    double l,r,s;
    while(gets(a)&&gets(b))
    {
	x=strlen(a);
	y=strlen(b);
	for(i=x-1,s1=0;i>=0;i--)
	{
	    s1=s1+love(a[i]);
	}
	for(i=y-1,s2=0;i>=0;i--)
	{
	    s2=s2+love(b[i]);
	}
	for(i=0,p=0;s1>0;i++)
	{

	    p=p+(s1%10);
	    s1=s1/10;

	}
	if(p>=10)
	{
	    for(i=0,r=0;p>0;i++)
	    {
	        r=r+(p%10);
	        p=p/10;
	    }
	}
	else
	{
	    r=p;
	}
	for(i=0,q=0;s2>0;i++)
	{
	    q=q+(s2%10);
	    s2=s2/10;
	}
	if(q>=10)
	{

	    for(i=0,s=0;q>0;i++)
	    {
	        s=s+(q%10);
	        q=q/10;
	    }
	}
	else
	{
	    s=q;
	}

	if(s>r)
	{
	    l=(r/s)*100;
	}
	else
	{
	    l=(s/r)*100;
	}
	printf("%.2lf %%\n",l);
    }

return 0;
}

int love(char p)
{
    int a;
    a=p;
    if(a>=65&&a<=91)
    {
	a=a-64;
    }
    else if(a>=97&&a<=122)
    {
	a=a-96;
    }
    else
    {
	a=0;
    }

return a;
}
