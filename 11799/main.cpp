//id:11799
//name:horror dash
//site:uva
//date: 3/2/2012

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
    int cases,p,temp,t=1,t2;  //p=num. of participant
    int given[10000];
    cin>>cases;
    while(cases--)
    {
        cin>>p;
        t2=p;
        for(int i=0;i<p;i++)
        {
            cin>>given[i];

        }
        sort(given,given+p);
        cout<<"Case "<<t<<": "<<given[p-1]<<endl;
        t++;

    }

return 0;
}
