/** verdict: accepted-128
 *  author: zaman
 *  used algorithm: union find disjoint set
 *  remarks: be careful about path compression, it will help a lot
 *  date: november 11,2013 time of acceptance: 12:56 pm
 *  rank: 393 time: 0.389sec
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
vector<int>pset;

//vi pset(10001);
vector<int>money;
vector<int>total_money;
int numberOfDisjointSet;
void initSet(int N)
{
    numberOfDisjointSet=N;
    total_money.assign(N,0);
    for(int i=0;i<N;i++)
    {
        pset.push_back(i);
    }
}

int findSet(int i)
{
    return ((pset[i]==i)? i : pset[i] = findSet(pset[i]));
}

bool isSameSet(int i,int j)
{
    return findSet(i)==findSet(j);
}

void unionSet(int i,int j)
{

    if(!isSameSet(i,j))
    {
        numberOfDisjointSet--;
        pset[findSet(i)]=findSet(j);

    }
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

    int cases;
    cin>>cases;
    while(cases--)
    {
        int numOfFrnds,numOfFrndships;
        cin>>numOfFrnds>>numOfFrndships;
        initSet(numOfFrnds);
        while(numOfFrnds--)
        {
            int taka;
            cin>>taka;
            money.push_back(taka);
        }

        while(numOfFrndships--)
        {
            int x,y;
            cin>>x>>y;
            unionSet(x,y);
        }
        set<int>dekhikihoy;

        for(int i=0;i<pset.size();i++)
        {
            findSet(i);
            dekhikihoy.insert(pset[i]);
        }

        for(int m=0;m<pset.size();m++)
        {
            total_money[pset[m]] += money[m];
        }

        set<int>::iterator it;

        for(it = dekhikihoy.begin();it!=dekhikihoy.end();it++)
        {
                if(total_money[*it]!=0)
                {
                    break;
                }
        }
        if(it!=dekhikihoy.end())
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"POSSIBLE"<<endl;
        }
        pset.clear();
        money.clear();
        total_money.clear();
        dekhikihoy.clear();
    }
	return 0;
}
