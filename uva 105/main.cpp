/** verdict: AC
 *  author: zaman
 *  used algorithm:
 *  remarks:
 *  date: 13/6/2014 , time of acceptance: 5:30 pm
 *  rank: 2407  time: 0.032s
 *
 */

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;
typedef pair<int,int>ii;
typedef pair<ii,int>pii;
vector<pii>storage;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int x,height,y,maximum;
    pii temp;
    maximum=0;
    while(cin>>x>>height>>y)
    {
        if(x>maximum)
        {
            maximum=x;
        }
        if(height>maximum)
        {
            maximum=height;
        }
        if(y>maximum)
        {
            maximum=y;
        }
        temp.first.first = x;
        temp.first.second = y;
        temp.second = height;
        storage.push_back(temp);
    }
    vector<int>result(maximum+1,0);
    for(int i=0;i<storage.size();i++)
    {
        int a=storage[i].first.first;
        int b=storage[i].first.second;
        int c=storage[i].second;
        for(int j=a;j<b;j++)
        {
            if(result[j]<c)
            {
                result[j]=c;
            }
        }
    }
    int start = storage[0].first.first;
    cout<<start<<" "<<result[start];

    for(int i=start+1;i<result.size();i++)
    {

        if(result[i]!=result[i-1])
        {
            cout<<" "<<i<<" "<<result[i];
        }


    }
    cout<<endl;
	return 0;
}
