//shuvo
//id:10071
//problem name:Back to high school physics
//date: 13/11/2011

#include<iostream>
#include<cstdio>


int main()
{
    long long int v,t,s;   // v = velocity , t=time,s=displacement
    while(scanf("%lld %lld",&v,&t)!=EOF)
    {
        s=2*v*t;      /* for constant acceleration
                      dis=velocity*time*/
        printf("%lld\n",s);
    }
return 0;
}
