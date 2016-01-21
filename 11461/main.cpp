//id:11416
//name:square numbers
//date:3/2/2012
//site:uva

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    long int temp[100001],start,end,x,count,i;


    for(i=1;i<=100000;i++)
    {
        x=sqrt(i);
        if(i==x*x)
        {
            temp[i]=1;
        }
        else
        {
            temp[i]=0;
        }
    }

    while(cin>>start>>end)
    {
        if(start==0&&end==0)
        {
            break;
        }
        count=0;
        for(i=start;i<=end;i++)
        {
            if(temp[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

return 0;
}
