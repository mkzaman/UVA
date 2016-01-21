/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: Floodfill Algo
 *  remarks:
 *  date: February 15,2014 , time of acceptance: 9:15pm
 *  rank: 633  time: 0.042s
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

vector<string>grid;
int square,counter;
int dr[]={0,0,-1,-1,-1,1,1,1};
int dc[]={1,-1,0,1,-1,0,1,-1};

int floodfill(int r,int c,char ch2)
{
    if(r<0||r>=square||c<0||c>=square)
    {
        return 0;
    }
    if(grid[r][c]==ch2)
    {
        return 0;
    }
    grid[r][c]=ch2;
    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch2);
    }
    return 0;

}


void calculate()
{
    for(int i=0;i<square;i++)
    {
        for(int j=0;j<square;j++)
        {
            if(grid[i][j]=='x')
            {
                counter++;
                floodfill(i,j,'.');
            }
        }
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int cases;
    string temp;
    cin>>cases;
    for(int c=1;c<=cases;c++)
    {
        counter=0;
        cin>>square;
        getchar();
        for(int i=0;i<square;i++)
        {
            getline(cin,temp);
            grid.push_back(temp);
        }
        calculate();
        cout<<"Case "<<c<<": "<<counter<<endl;
        grid.clear();
    }

	return 0;
}
