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
  //  freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int number_of_words,number_of_jobs;
    map<string,int>dictionary;
    string temp;
    int tempu,price;
    while(cin>>number_of_words>>number_of_jobs)
    {
        while(number_of_words--)
        {
            cin>>temp>>tempu;
            dictionary[temp]=tempu;
        }
        while(number_of_jobs--)
        {
            price=0;
            while(cin>>temp)
            {
                if(temp==".")
                {
                    break;
                }
                map<string,int>::iterator it;
                it=dictionary.find(temp);
                if(it!=dictionary.end())
                {
                    price+=it->second;
                }
            }
            cout<<price<<endl;
        }
    }

	return 0;
}
