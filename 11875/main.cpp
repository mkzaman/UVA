//id:11875
//name:bricks game
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
    int cases,given[50],p,t=1,temp;
    cin>>cases;
    while(cases--)
    {
        cin>>p;
        for(int i=0;i<p;i++)
        {
            cin>>given[i];
        }
        sort(given,given+p);
        temp=(p/2);
        cout<<"Case "<<t<<": "<<given[temp]<<endl;
        t++;
    }

return 0;
}
