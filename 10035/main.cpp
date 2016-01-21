//id:10035
//name:primary arithmetic
//date:24/1/2012
//site:uva


#include <cstdio>
#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int giv1,giv2,carry,count,tem1,tem2,tem;
    while(cin>>giv1>>giv2)
    {
        if(giv1&&giv2)
        {
            break;
        }
        carry=0;
        count=0;
        while(giv1!=0&&giv2!=0)
        {
            tem1=giv1%10;
            tem2=giv2%10;
            giv1=giv1/10;
            giv2=giv2/10;
            tem=tem1+tem2+carry;
            if(tem>9)
            {
                count++;
                carry=tem/10;
            }

        }
        if(count==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(count==1)
        {
            cout<<"1 carry operation."<<endl;
        }
        else
        {
            cout<<count<<" carry operations."<<endl;
        }
    }

return 0;
}
