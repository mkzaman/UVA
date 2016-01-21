/*
    author: shuvo
    uva 10038 jolly jumper
    adhoc
    :)
    1st june,2013
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int number_of_elements,temp,i,check;
    vector<int>container,balchal;
    while(cin>>number_of_elements)
    {
        check=0;
        while(number_of_elements--)
        {
            cin>>temp;
            container.push_back(temp);
        }
        for(i=1;i<container.size();i++)
        {
            temp=fabs(container[i]-container[i-1]);
            balchal.push_back(temp);
        }

        sort(balchal.begin(),balchal.end());
        for(i=1;i<balchal.size();i++)
        {
            if(balchal[i]==balchal[i-1])
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            cout<<"Not jolly"<<endl;
        }
        else
        {
            cout<<"Jolly"<<endl;
        }
        container.clear();
        balchal.clear();

    }
    return 0;
}
