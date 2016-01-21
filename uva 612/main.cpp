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
    int cases,row,column;
    vector<string>dna;
    string temp;
    cin>>cases;
    while(cases--)
    {
        getchar();
        cin>>row>>column;
        while(column--)
        {
            cin>>temp;
            dna.push_back(temp);
            temp.clear();
        }
      //  for(int i=0;i<dna.size();i++)
     //   {
     //       cout<<dna[i]<<endl;
     //   }
        stable_sort(dna.begin(),dna.end());
        for(int i=0;i<dna.size();i++)
        {
            cout<<dna[i]<<endl;
        }
    }
	return 0;
}
