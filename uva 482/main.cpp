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
    char temp_str[100000];
    string numbers,given;
    int cases,counter=0,temp,i,j;
    vector<string>mojud;
    vector<string>result(10000,'\0');
    vector<int>serial;
    while(cin>>cases)
    {
        getchar();
        getchar();
        if(counter>0)
        {
            cout<<endl;
        }
        while(cases--)
        {
            getline(cin,numbers);
            getline(cin,given);
            for(i=0,j=0;i<numbers.size();i++)
            {
                if(numbers[i]==' ')
                {
                    temp_str[j]='\0';
                    temp=atoi(temp_str);
                    serial.push_back(temp);
                    j=0;
                }
                temp_str[j]=numbers[i];
                j++;
            }
            for(i=0,j=0;i<given.size();i++)
            {
                if(given[i]==' ')
                {
                    temp_str[j]='\0';
                    mojud.push_back(temp_str);
                    j=0;
                }
                temp_str[j]=given[i];
                j++;
            }
            for(i=0;i<serial.size();i++)
            {
                j=serial[i]-1;
                result.at(j)=mojud[i];
            }
            for(i=0;i<result.size();i++)
            {
                cout<<result[i]<<endl;
            }

        }
        numbers.clear();
        given.clear();
        mojud.clear();
        serial.clear();
    }

    return 0;
}
