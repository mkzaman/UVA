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
    vector<string>input;
    vector<int>first;
    vector<int>last;
    string temp;
    int number_of_row,balchal,counter,i;
    while(cin>>number_of_row)
    {
        counter=0;
        if(!number_of_row)
        {
            return 0;
        }
        balchal=number_of_row;
        if(balchal==1)
        {
            cout<<0<<endl;
            continue;
        }
        while(balchal--)
        {
            cin>>temp;
            input.push_back(temp);
            temp.clear();
        }
        for(i=0;i<input.size();i++)
        {

        }


        input.clear();
    }
    return 0;
}
