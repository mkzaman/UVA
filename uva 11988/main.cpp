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
    list<char>result;
    string bleh_bleh,temp;
    while(getline(cin,bleh_bleh))
    {
        for(i=0;i<bleh_bleh.size();i++)
        {
            if(bleh_bleh[i]!='['||bleh_bleh[i]!=']')
            {
                result.push_back(bleh_bleh[i]);
            }
        }
    }
	return 0;
}
