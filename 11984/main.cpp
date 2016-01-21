//id:11984
//site:uva
//name:a change in thermal unit
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
    double c,d,f,t;
    int cases,p=1;
    cin>>cases;
    while(cases--)
    {
        cin>>c>>d;

        f=(d*5.0)/9.0;
        t=c+f;
        printf("Case %d: %.02lf\n",p,t);
        p++;
    }

return 0;
}
