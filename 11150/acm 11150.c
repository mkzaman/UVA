#include<stdio.h>

int f0(int );
int f1(int );
int f2(int );


int main()
{
    int n,a,b,c;
    while(scanf("%d",&n))

    {
	a=f0(n);
    b=f1(n);
    c=f2(n);

    if(a>=b&&a>=c)
    {
        printf("%d\n",a);
    }
    else if(b>=a&&b>=c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }
    }
return 0;
}

int f0(int n)
{
    int p,q,s,t,m;
    m=n;
    for(s=n,t=m;t>=3;)
    {
	p=t%3;
	q=t/3;
	t=p+q;
	s=s+q;
    }
return s;
}

int f1(int n)
{
    int p,q,s,t,m;
    m=n+1;
    for(s=n,t=m;t>=3;)
    {
	p=t%3;
	q=t/3;
	t=p+q;
	s=s+q;
    }
    if(t==1)
    {
	return s;
    }
    else
    {
	return 0;
    }
}

int f2(int n)
{
    int p,q,s,t,m;
    m=n+2;
    for(s=n,t=m;t>=3;)
    {
	p=t%3;
	q=t/3;
	t=p+q;
	s=s+q;
    }
    if(t==2)
    {
	return s;
    }
    else
    {
	return 0;
    }
}
