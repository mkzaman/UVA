/** verdict: accepted
 *  author: zaman
 *  used algorithm: brute force, using priority queue
 *  remarks: priority queue is used to make the order descending, this was vital
 *  date: 19th december, 2013 , time of acceptance: 8:03 p.m.
 *  rank: 1454  time: 0.045s
 *
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
    priority_queue<int, vector<int>, greater<int> >numbers;
    int how_many;
    while(cin>>how_many)
    {
        if(!how_many)
        {
            return 0;
        }
        int temp;
        while(how_many--)
        {
            cin>>temp;
            numbers.push(temp);
        }
        int a,b=0;
        while(numbers.size()>1)
        {
            a=numbers.top();
            numbers.pop();
            a+=numbers.top();
            numbers.pop();
            numbers.push(a);
            b+=a;
        }
        numbers.pop();
        cout<<b<<endl;
    }
	return 0;
}
