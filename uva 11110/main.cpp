/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: February 13,2014, time of acceptance: 5:51pm
 *  rank: 621  time: 0.025s
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
vector<vi>grid;
int N;
vi result;
int counter;
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};

int floodfill(int r,int c,int ch1,int ch2)
{
    if(r<0||r>=N||c<0||c>=N)
    {
        return 0;
    }
    if(grid[r][c]!=ch1)
    {
        return 0;
    }
    grid[r][c]=ch2;
    counter++;
    for(int d=0;d<4;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch1,ch2);
    }
    return 0;
}
void calculate()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(grid[i][j]!=0)
            {
                counter=0;
                floodfill(i,j,grid[i][j],0);
                result.push_back(counter);
            }
        }
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int x,y;
	vi temp;
	string tempo;

	while(cin>>N)
    {
        if(!N)
        {
            return 0;
        }
        getchar();
        temp.assign(N,N);
        grid.assign(N,temp);
        for(int i=0;i<N-1;i++)
        {
            getline(cin,tempo);
            stringstream ss(tempo);
            while(ss>>x>>y)
            {
                grid[x-1][y-1]=i+1;
            }
        }
        calculate();
        if(temp==result)
        {
            cout<<"good"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
        result.clear();

    }

	return 0;
}
