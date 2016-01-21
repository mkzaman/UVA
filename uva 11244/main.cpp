/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks: very easy
 *  date: February 13,2014, time of acceptance: 6:12pm
 *  rank: 1279 time: 0.048s
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
int Row,column;
vector<string>grid;
int result,counter;
int dr[]={0,0,1,1,1,-1,-1,-1};
int dc[]={1,-1,0,1,-1,0,1,-1};
int floodfill(int r,int c,char ch1,char ch2)
{
    if(r<0||r>=Row||c<0||c>=column)
    {
        return 0;
    }
    if(grid[r][c]!=ch1)
    {
        return 0;
    }
    grid[r][c]=ch2;
    counter++;
    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch1,ch2);
    }
    return 0;
}

void calculate()
{
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(grid[i][j]=='*')
            {
                counter=0;
                floodfill(i,j,'*','.');
                if(counter==1)
                {
                    result++;
                }
            }
        }
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    result=0;
    string temp;
    while(cin>>Row>>column)
    {
        if(!Row&&!column)return 0;
        getchar();
        for(int i=0;i<Row;i++)
        {
            getline(cin,temp);
            grid.push_back(temp);
        }
        result=0;
        calculate();
        cout<<result<<endl;
        grid.clear();
    }
	return 0;
}
