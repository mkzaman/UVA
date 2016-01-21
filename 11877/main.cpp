//id:11877
//name: coca cola store
//date: 3/2/2012
//site: uva

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
    int given,a,b,x,y;
    while(cin>>given)
    {
        if(given==0)
        {
            break;
        }
        x=0;
        y=given;
        while(y>=3)
        {
            a=y/3;   // // khali botol
            b=y%3;    //  vora botol
            x=x+a;    //notun botol
            y=a+b;    //abar o khali botol
            if(y==2)
            {
                y=3;
            }
        }
        cout<<x<<endl;
    }

return 0;
}
