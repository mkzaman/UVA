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
   // freopen("output.txt","w",stdout);
    map<string,double>gachpala;
    int cases;
    cin>>cases;
    getchar();
    getchar();
    string temp;
    double bal,chal;

    while(cases--)
    {
        chal=0.0;
        while(getline(cin,temp)&&temp.size())
        {
            //getchar();

            gachpala[temp]=gachpala[temp]+1.0;

            chal=chal+1.0;
        }
        int pakhi;
        pakhi=gachpala.size();
        map<string,double>::iterator it;

        for(it=gachpala.begin();it!=gachpala.end();it++)
        {
            cout<<it->first;
            bal=(it->second/chal)*100.0;
            printf(" %.4lf\n",bal);
        }
        if(cases>0)
        {
            cout<<endl;
        }
        gachpala.clear();
    }

	return 0;
}
