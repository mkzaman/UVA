/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: DFS,Topological Sort
 *  remarks:
 *  date: February 23,2014 , time of acceptance: 4:32 pm
 *  rank: 3886 time: 0.012s
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
#define DFS_WHITE 0
#define DFS_BLACK 1
using namespace std;

typedef vector<int>vi;
vector<vi>AdjList;
vi dfs_num;
vi topSort;

void dfs(int u)
{
    dfs_num[u]=DFS_BLACK;
    for(int i=0;i<(int)AdjList[u].size();i++)
    {
        int p=AdjList[u][i];
        if(dfs_num[p]==DFS_WHITE)
        {
            dfs(p);
        }
    }
    topSort.push_back(u+1);
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int N,M,a,b;

	while(cin>>N>>M)
    {
        if(!N&&!M)
        {
            return 0;
        }
        AdjList.assign(N,vi());
        dfs_num.assign(N,DFS_WHITE);
        for(int i=0;i<M;i++)
        {
            cin>>a>>b;
            AdjList[a-1].push_back(b-1);
        }
        for(int i=0;i<N;i++)
        {
            if(dfs_num[i]==DFS_WHITE)
            {
                dfs(i);
            }
        }
        reverse(topSort.begin(),topSort.end());
        for(int i=0;i<(int)topSort.size();i++)
        {
            cout<<topSort[i];
            if(i<(int)topSort.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        dfs_num.clear();
        topSort.clear();
        AdjList.clear();

    }


	return 0;
}
