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
    string given,temp,output;
    stack<char>maintanance;
    int cases;
    cin>>cases;
    getchar();
    getchar();
    while(cases--)
    {
        while(getline(cin,temp)&&temp.size())
        {
            given+=temp;
            temp.clear();
        }
        for(int i=0;i<given.size();i++)
        {
            if(given[i]=='(')
            {
                maintanance.push(given[i]);
            }
            else if(given[i]==')')
            {
                if(maintanance.size())
                {
                    while(maintanance.top()!='(')
                    {
                        output+=maintanance.top();
                        maintanance.pop();
                        if(maintanance.empty())
                        {
                            break;
                        }
                    }
                }
                maintanance.pop();
            }
            else if(given[i]=='/'||given[i]=='*')
            {
                if(maintanance.size())
                {
                    while((maintanance.top()=='*'||maintanance.top()=='/'))
                    {
                        output+=maintanance.top();
                        maintanance.pop();
                        if(maintanance.empty())
                        {
                            break;
                        }
                    }
                }

                maintanance.push(given[i]);
            }
            else if((given[i]=='+'||given[i]=='-'))
            {
                if(maintanance.size())
                {
                    while(maintanance.top()=='*'||maintanance.top()=='/'||maintanance.top()=='+'||maintanance.top()=='-')
                    {
                        output+=maintanance.top();
                        maintanance.pop();
                        if(maintanance.empty())
                        {
                            break;
                        }
                    }
                }
                maintanance.push(given[i]);
            }
            else
            {
                output+=given[i];
            }

        }
        while(!maintanance.empty())
        {
            output+=maintanance.top();
            maintanance.pop();
        }
        cout<<output<<endl;
        if(cases>0)
        {
            cout<<endl;
        }
        given.clear();
        temp.clear();
        output.clear();
        maintanance=stack<char>();

    }
	return 0;
}
