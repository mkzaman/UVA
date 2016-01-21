#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long num,x;
    int a=1;
    for(num=2;a<1500;num++)
    {
        x=num;
        while(x%2==0)
        {
            x=x/2;
        }
        while(x%3==0)
        {
            x=x/3;
        }
        while(x%5==0)
        {
            x=x/5;
        }
        if(x==1)
        {
            a++;
        }
    }
    cout <<"The 1500'th ugly number is "<<num-1;

return 0;
}
