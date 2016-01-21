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
    int test,paid_char,number_of_lines,i,j;
    unsigned char char_c;
    string storage;
    vector<unsigned char>char_store;
    vector<double>val_store;
    double total,value;
    while(cin>>test)
    {
        total=0.0;
        cin>>paid_char;
        while(paid_char--)
        {
            cin>>char_c;
            cin>>value;
            char_store.push_back(char_c);
            val_store.push_back(value);
        }
        cin>>number_of_lines;
        getchar();
        while(number_of_lines--)
        {
            getline(cin,storage);
            for(i=0;i<storage.size();i++)
            {
                for(j=0;j<char_store.size();j++)
                {
                    if(storage[i]==char_store[j])
                    {
                        total+=val_store[j];
                        break;
                    }
                }
            }
            storage.clear();
        }
        total=total/100.0;
        printf("%0.2lf$\n",total);
        char_store.clear();
        val_store.clear();
    }
    return 0;
}
//TLE
