//id:11479
//name:is this the easiest problem?
//date: 3/2/2012
//site :uva

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
    long long int cases,t=1,triangle[3];
    string a;
    cin>>cases;
    while(cases--)
    {
        cin>>triangle[0]>>triangle[1]>>triangle[2];
        sort(triangle,triangle+3);
        if(triangle[0]+triangle[1]<=triangle[2])
        {
            a="Invalid";
        }
        else if(triangle[0]==triangle[1]&&triangle[1]==triangle[2])
        {
            a="Equilateral";
        }
        else if(triangle[0]==triangle[1]||triangle[0]==triangle[2]||triangle[1]==triangle[2])
        {
            a="Isosceles";
        }
        else
        {
            a="Scalene";
        }
        cout<<"Case "<<t<<": "<<a<<endl;
        t++;
    }

return 0;
}
