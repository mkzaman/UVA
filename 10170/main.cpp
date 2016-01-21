//shuvo
//id:10170
//name: the hotel with infinite rooms
//date:14/11/2011


#include<cstdio>

int main()
{
    long long int a,b;  //a=memeber in 1st grp. b=num of days
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        for(;b>0;)
        {
            b=b-a;
            a++;
        }
        printf("%lld\n",a-1);
    }
return 0;
}
