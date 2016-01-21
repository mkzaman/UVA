/** verdict: accepted-130
 *  author: zaman
 *  used algorithm: unionfind disjoint Set
 *  remarks: easy problem, maintain a map for give the strings an integer identity
 *  date: November 14,2013 , time of acceptance: 1:04 pm
 *  rank:229  time: 0.327s
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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int species,relations;
    while(cin>>species>>relations)
    {
        if(!species&&!relations)
        {
            return 0;
        }

         getchar();
        initSet(species);
        map<string,int>thik_rakha;
        for(int i=0;i<species;i++)
        {
            string type;
            cin>>type;
            getchar();
            thik_rakha[type]=i;
        }
        string type1,type2;
        while(relations--)
        {
            cin>>type1>>type2;
            getchar();
            unionSet(thik_rakha[type1],thik_rakha[type2]);
        }
        vi::iterator it;
        it=max_element(setSize.begin(),setSize.begin()+setSize.size());
        cout<<*it<<endl;
        getchar();
        pset.clear();
        setSize.clear();
        thik_rakha.clear();

    }
	return 0;
}
