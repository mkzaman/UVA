/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: February 2,2014, time of acceptance: 3:20pm
 *  rank: 5997  time: 0.035s
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
vector<string>input;
int result,Row,Column;
int dr[] = {1,1,0,-1,-1,-1,0,1};
int dc[] = {0,1,1,1,0,-1,-1,-1};

int floodfill(int r,int c,char ch1)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(input[r][c]!=ch1)
    {
        return 0;
    }
    input[r][c]='.';
    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],'@');
    }
    return 0;
}

void calculate()
{
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]=='@')
            {
                result++;
                floodfill(i,j,'@');
            }
        }
    }
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	string temp;
	while(cin>>Row>>Column)
    {
        getchar();
        if(!Row)
        {
            return 0;
        }
        result=0;
        for(int i=0;i<Row;i++)
        {
            getline(cin,temp);
            input.push_back(temp);
            temp.clear();
        }
        calculate();
        cout<<result<<endl;
        input.clear();
    }
	return 0;
}
