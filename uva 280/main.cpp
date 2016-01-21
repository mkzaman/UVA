/** verdict: ACCEPTED (WA)
 *  author: zaman
 *  used algorithm: Breadth First Search
 *  remarks: always careful about the id and size of vector, this can cause to runtime error, carefully clear the vector when necessary
 *  date: January 3,2014 , time of acceptance: 2:07 pm
 *  rank: 607  time: 0.345s
 *
 */

///first problem solved in 2014 :D
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

#define BLACK 1
#define WHITE -1

typedef vector<int>vi;

vector<vi>AdjList;

vi dfs_num;


void dfs(int source)
{
    for(int j=0;j<(int)AdjList[source].size();j++)
    {
        int v=AdjList[source][j];
        if(dfs_num[v]==WHITE)
        {
            dfs_num[v]=BLACK;
            dfs(v);
        }
    }
}


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int number_of_vertex,vertex,neighbor,num_of_enquiry,given;
	vector<int> result;

	while(cin>>number_of_vertex)
    {
        if(!number_of_vertex)
        {
            break;
        }
        dfs_num.assign(number_of_vertex,WHITE);
        AdjList.assign(number_of_vertex,vi());

        while(cin>>vertex)
        {
            if(!vertex)
            {
                break;
            }
            while(cin>>neighbor)
            {
                if(!neighbor)
                {
                    break;
                }
                AdjList[vertex-1].push_back(neighbor-1);
            }
        }
            cin>>num_of_enquiry;

            while(num_of_enquiry--)
            {
                cin>>given;
                dfs(given-1);
                for(int i=0;i<(int)dfs_num.size();i++)
                {
                    if(dfs_num[i]==WHITE)
                    {
                        result.push_back(i+1);
                    }
                }
                cout<<result.size();
                for(int i=0;i<(int)result.size();i++)
                {
                    cout<<" "<<result[i];
                }
                cout<<endl;
                result.clear();
                dfs_num.clear();
                dfs_num.assign(number_of_vertex,WHITE);
            }


        AdjList.clear();
        dfs_num.clear();
        result.clear();
    }


	return 0;
}
