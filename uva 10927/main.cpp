//accepted
//acccccccccccccccccc

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
  //  freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
    int number_of_cards;
    deque<int>maintanance;
    while(cin>>number_of_cards)
    {
        if(!number_of_cards)
        {
            return 0;
        }
        cout<<"Discarded cards:";
        for(int i=1;i<=number_of_cards;i++)
        {
            maintanance.push_back(i);
        }
        while(maintanance.size()>1)
        {
            cout<<" "<<maintanance.front();
            if(maintanance.size()>2)
            {
                cout<<",";
            }
            maintanance.pop_front();
            maintanance.push_back(maintanance.front());
            maintanance.pop_front();
        }
        cout<<endl;
        cout<<"Remaining card: "<<maintanance.front()<<endl;
        maintanance=deque<int>();
    }

	return 0;
}
