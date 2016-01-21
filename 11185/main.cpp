#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    long long a;
    int ternary[200],i,j;
    while(cin>>a)
    {
        if(a<0)
        {
            return 0;
        }


        if(a==0)
        {
            cout<<'0'<<endl;
        }


        else
        {
            for(i=0;a>0;i++)
            {
                ternary[i]=a%3;
                a=a/3;
            }
            for(j=i-1;j>=0;j--)
            {
                cout<<ternary[j];
            }
        }
        cout<<endl;

    }
return 0;
}
