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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	map<int,int>owner;
	int jack,jill,cd;
	while(cin>>jack>>jill)
    {
        if(!jack&&!jill)
        {
            return 0;
        }
        while(jack--)
        {
            cin>>cd;
            owner[cd]++;
        }
        while(jill--)
        {
            cin>>cd;
            owner[cd]++;
        }
        int counter=0;
        map<int,int>::iterator it;
        for(it=owner.begin();it!=owner.end();it++)
        {
            if(it->second==2)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }

	return 0;
}
