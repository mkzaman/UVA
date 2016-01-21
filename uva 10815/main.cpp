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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    set<string>bolod;
    string maal,temp;

    while(cin>>maal)
    {
        transform(maal.begin(),maal.end(),maal.begin(),::tolower);
        for(int i=0;i<maal.size();i++)
        {
            if(maal[i]>='a'&&maal[i]<='z')
            {
                temp+=maal[i];
            }
            else
            {
                if(temp.size())
                {
                    bolod.insert(temp);
                    temp.clear();
                }
            }
        }
        if(temp.size())
        {
            bolod.insert(temp);
        }

        temp.clear();
    }
    set<string>::iterator it;
    for(it=bolod.begin();it!=bolod.end();it++)
    {

        cout<<*it<<endl;
    }

	return 0;
}
