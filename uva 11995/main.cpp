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
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int lines,temp_x,dhukbe_naki,dq,counter,s,q,p;
    stack<int>stack_m;
    priority_queue<int>priority_queue_m;
    queue<int>queue_m;
    vector<int>temps,tempq,temppq,mama;

    while(cin>>lines)
    {
        counter=s=q=p=0;
        dq=0;
        while(lines--)
        {
            cin>>dhukbe_naki>>temp_x;
            if(dhukbe_naki==2)
            {
                mama.push_back(temp_x);
                if(stack_m.size())
                {
                    temps.push_back(stack_m.top());
                    stack_m.pop();
                }
                if(queue_m.size())
                {
                    tempq.push_back(queue_m.front());
                    queue_m.pop();
                }
                if(priority_queue_m.size())
                {
                    temppq.push_back(priority_queue_m.top());
                    priority_queue_m.pop();
                }
            }
            else
            {
                priority_queue_m.push(temp_x);
                queue_m.push(temp_x);
                stack_m.push(temp_x);
            }
        }

        if(mama==temps)
        {
            s=1;
            counter++;
        }
        if(mama==tempq)
        {
            q=1;
            counter++;
        }
        if(mama==temppq)
        {
            p=1;
            counter++;
        }

        if(counter>=2)
        {
            cout<<"not sure";
        }
        else if(counter==1)
        {
            if(s==1)
            {
                cout<<"stack";
            }
            else if(q==1)
            {
                cout<<"queue";
            }
            else
            {
                cout<<"priority queue";
            }

        }
        else
        {
            cout<<"impossible";
        }
        cout<<endl;
        temppq.clear();
        tempq.clear();
        temps.clear();
        mama.clear();
        stack_m=stack<int>();
        queue_m=queue<int>();
        priority_queue_m=priority_queue<int>();

    }

	return 0;
}
