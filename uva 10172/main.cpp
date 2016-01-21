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
struct tempo{
 queue<int>terminal;
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    const int ARRAYSIZE=110;
    tempo karakari[ARRAYSIZE];
    stack<int>gari;
    int cases,number_of_terminal,size_of_stack,size_of_queue,existing,dhukao;
    int number_of_bag,timerhisab,x,y;
    cin>>cases;
    while(cases--)
    {
        number_of_bag=timerhisab=0;
        cin>>number_of_terminal>>size_of_stack>>size_of_queue;
        for(int i=1;i<=number_of_terminal;i++)
        {
            cin>>existing;
            for(int j=1;j<=existing;j++)
            {
                cin>>dhukao;
                karakari[i].terminal.push(dhukao);
            }
            number_of_bag+=existing;
        }
        for(int i=1;i<=number_of_terminal;i++)
        {
            //unload


                while((karakari[i].terminal.size()<size_of_queue)&&(!gari.empty()))
                {
                    y=gari.size();
                    x=gari.top();

                    if(gari.top()!=i)
                    {
                        karakari[i].terminal.push(gari.top());
                       // gari.pop();
                        //timerhisab++;
                    }
                    else
                    {
                        number_of_bag--;
                    }
                    gari.pop();
                    timerhisab++;
                    if(number_of_bag==0)
                    {
                        break;
                    }

                }
                if(!gari.empty()&&gari.top()==i)
                {
                    gari.pop();
                    number_of_bag--;
                    timerhisab++;
                    if(number_of_bag==0)
                    {
                        break;
                    }
                }
            if(!number_of_bag)
            {
                cout<<timerhisab<<endl;
                break;
            }
            //load
            if(gari.size()<size_of_stack)
            {
                while(gari.size()<size_of_stack&&!(karakari[i].terminal.empty()))
                {
                    gari.push(karakari[i].terminal.front());
                    karakari[i].terminal.pop();
                    timerhisab++;
                }
            }
            if(i==number_of_terminal)
            {
                i=0;
            }
            timerhisab+=2;
        }


     //   for(int i=0;i<ARRAYSIZE;i++)
     //   {
     //       karakari[i].terminal=queue<int>();
     //   }
     //   gari=stack<int>();

    }
	return 0;
}
