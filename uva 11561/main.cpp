/** verdict:
 *  author: zaman
 *  used algorithm:
 *  remarks:
 *  date: , time of acceptance:
 *  rank:  time:
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

int Row,Column;
vector<string>grid;
int result;
int dr[]={0,0,-1,1};
int dc[]={1,-1,0,0};

int floodfill(int r,int c,char ch2)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(grid[r][c]=='#')
    {
        return 0;
    }
    if(grid[r][c]=='T')
    {
        return 0;
    }
    if(grid[r][c]=='*')
    {
        return 0;
    }
    if(grid[r][c]=='G')
    {
        grid[r][c]='*';
        result++;
        for(int i=0;i<4;i++)
        {
            floodfill(r+dr[i],c+dc[i],'*');
        }
        return 0;
    }
    grid[r][c]=ch2;
    for(int i=0;i<4;i++)
    {
        floodfill(r+dr[i],c+dc[i],'*');
    }

    return 0;

}


void calculate()
{
    int check=0;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(grid[i][j]=='P')
            {
                check=1;
                result=0;
                grid[i][j]='.';
                floodfill(i,j,'*');
                break;
            }
        }
        if(check==1)
        {
            break;
        }
    }
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


    string temp;
    while(cin>>Column>>Row)
    {
        getchar();
        for(int i=0;i<Row;i++)
        {
            getline(cin,temp);
            grid.push_back(temp);

        }
        calculate();
        cout<<result<<endl;
        grid.clear();
    }


	return 0;
}
