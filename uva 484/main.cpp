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
    string given;

    map<int,int>frequency;
    vector<int>order;
    int temp;
    while(cin>>temp)
    {

        vector<int>::iterator it;
        it=find(order.begin(),order.end(),temp);

        if(it==order.end())
        {
            order.push_back(temp);
        }

        frequency[temp]++;



    }
    for(int i=0;i<order.size();i++)
        {
            cout<<order[i]<<" "<<frequency[order[i]]<<endl;
        }
        order.clear();
        frequency.clear();

	return 0;
}
