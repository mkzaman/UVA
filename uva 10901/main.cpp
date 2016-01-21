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
queue<int>leftie,rightie,ferry;
int ferry_time;
void unload()
{
    ferry.pop();
    cout<<ferry_time<<endl;
}


void left_side()
{
    while(leftie.front()<=ferry_time)
    {
        ferry.push(leftie.front());
        leftie.pop();
    }

}

void right_side()
{
    while(rightie.front()<=ferry_time)
    {
        ferry.push(rightie.front());
        rightie.pop();
    }

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //queue<int>left,right,ferry;
    int capacity,somoy,line,cases,time,temporary;//,ferry_time;
    string checker;
    cin>>cases;
    while(cases--)
    {
        cin>>capacity>>somoy>>line;
        while(line--)
        {
            cin>>time>>checker;
            if(checker=="left")
            {
                leftie.push(time);
            }
            else
            {
                rightie.push(time);
            }
        }
        ferry_time=0;
        temporary=1;
        while(leftie.size()||rightie.size()||ferry.size())
        {
            if(ferry.size())
            {
                unload();
            }

            if(leftie.size()&&temporary==1)
            {
                if(rightie.size())
                {
                    if(rightie.front()<leftie.front())
                    {
                        ferry_time=rightie.front()+somoy;
                        right_side();
                        temporary=1;
                    }
                    else
                    {
                        left_side();
                        temporary=0;
                    }
                }
                else
                {
                    left_side();
                    temporary=0;
                }

            }

            ferry_time+=somoy;
            if(ferry.size())
            {
                unload();
            }

            if(rightie.size()&&temporary==0)
            {
                if(leftie.size())
                {
                    if(leftie.front()<rightie.front())
                    {
                        ferry_time=rightie.front()+somoy;
                        left_side();
                        temporary=0;
                    }
                    else
                    {
                        right_side();
                        temporary=1;
                    }
                }
                else
                {
                    right_side();
                    temporary=1;
                }

            }
            ferry_time+=somoy;
        }

        if(cases>0)
        {
            cout<<endl;
        }
    }

	return 0;
}
