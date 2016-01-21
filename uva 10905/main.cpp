#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <cctype>
#include <cstring>
#include <typeinfo>
#include <exception>
#include <stdexcept>
#include <memory>
#include <fstream>
#include <string>
#include <sstream>
#include <functional>
#include <iterator>
#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <locale>
#include <limits>
#include <utility>

using namespace std;

bool cmp(string a,string b)
{
    int i;
    if(a.size()<b.size())
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                break;
            }

        }
        if(i==a.size())
            {
                return 1;
            }
    }
    if(b.size()<a.size())
    {
        for(i=0;i<b.size();i++)
        {
            if(b[i]!=a[i])
            {
                break;
            }
        }
        if(i==b.size())
        {
            return 0;
        }
    }
    else
    {
        return a>b;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<string>data;
    int N;
    string temporay;
    while(cin>>N)
    {
        while(!N)
        {
            return 0;
        }
        for(int i=0;i<N;i++)
        {
            cin>>temporay;
            data.push_back(temporay);
        }
        sort(data.begin(),data.end(),cmp);
        for(int i=0;i<N;i++)
        {
            cout<<data[i];
        }
        cout<<endl;
        data.clear();
    }

	return 0;
}
