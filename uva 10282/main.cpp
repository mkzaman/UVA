//accepted

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
    string english,balchal,bb,tugal;
    map<string,string>dictionary;
    vector<string>gudam;
    string command;
    int count;
    while(getline(cin,bb)&&bb.size())
    {
        count=0;
        stringstream ss(bb);
        while(ss>>tugal)
        {
            if(count==0)
            {
                english=tugal;
                count++;
                continue;
            }
            if(count==1)
            {
                balchal=tugal;
                count=0;
                dictionary[balchal]=english;
                continue;
            }
        }
    }
    while(cin>>command)
    {
        getchar();
        gudam.push_back(command);
    }
    map<string,string>::iterator it;
    for(int i=0;i<gudam.size();i++)
    {
        it=dictionary.find(gudam[i]);
        if(it==dictionary.end())
        {
            cout<<"eh"<<endl;
        }
        else
        {
            cout<<it->second<<endl;
        }
    }

	return 0;
}
