//id:11854
//name:egypt
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
    int a[3]; //trivujer tin bahu
    while(cin>>a[0]>>a[1]>>a[2])
    {
        if(a[0]==0&&a[1]==0&&a[2]==0)
        {
            break;
        }
        sort(a,a+3);
        if((pow(a[0],2)+pow(a[1],2))==pow(a[2],2))
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }

return 0;
}
