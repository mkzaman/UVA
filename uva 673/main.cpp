/*
accepted
9/23/2013

stack er top check korar agey always stack e kichu ache kina check kore neya uchit

*/


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

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int cases;
    string given;
    stack<char>maintanance;
    cin>>cases;
    getchar();

    while(cases--)
    {
        getline(cin,given);
        if(!given.size())
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(given.size()%2!=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(int i=0;i<given.size();i++)
        {
            if(given[i]=='('||given[i]=='[')
            {
               maintanance.push(given[i]);
            }
            else if(given[i]==')')
            {
                if(maintanance.size())
                {
                    if(maintanance.top()=='(')
                    {
                        maintanance.pop();
                    }
                }

            }
            else if(given[i]==']')
            {
                if(maintanance.size())
                {
                    if(maintanance.top()=='[')
                    {
                        maintanance.pop();
                    }
                }
            }
        }
        if(!maintanance.size())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        given.clear();
        maintanance=stack<char>();
    }
	return 0;
}
