/** verdict: accepted:129
 *  author: zaman
 *  used algorithm: disjoint set union find
 *  remarks: easy problems, just have to sort the biggest in the setSize
 *  date:November 14, 2013 , time of acceptance: 12:36 pm
 *  rank:1657  time: 0.092s
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

typedef vector<int>vi;

vi pset,setSize;

void initSet(int N)
{
    setSize.assign(N,1);
    for(int i=0;i<N;i++)
    {
        pset.push_back(i);
    }
}

int findSet(int i)
{
    return ((pset[i]==i) ? i : pset[i]= findSet(pset[i]));
}

bool isSameSet(int i,int j)
{
    return findSet(i)==findSet(j);
}

void unionSet(int i,int j)
{
    if(!isSameSet(i,j))
    {
        setSize[findSet(j)] += setSize[findSet(i)];
        pset[findSet(i)] = findSet(j);
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
        int frnds,numOfFrndshps;
        cin>>frnds>>numOfFrndshps;
        initSet(frnds);

        while(numOfFrndshps--)
        {
            int a,b;
            cin>>a>>b;
            unionSet(a-1,b-1);
        }
        sort(setSize.rbegin(),setSize.rend());
        cout<<setSize[0]<<endl;
        pset.clear();
        setSize.clear();
    }

	return 0;
}
