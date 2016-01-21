//id:10931
//name:parity
//site:uva
//date:13/1/2011
#include <cstdio>
#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    long long given,temp[10000],count,i;
    while(cin>>given)
    {
        if(given==0)
        {
            break;
        }
        count=0;
        for(i=0;given>0;i++)
        {
            temp[i]=given%2;
            if(temp[i]==1)
            {
                count++;
            }
            given=given/2;
        }
        cout<<"The parity of ";
        for(i=i-1;i>=0;i--)
        {
            cout<<temp[i];
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
return 0;
}
