/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: Februay 5, 2014 , time of acceptance: 11:54 pm
 *  rank: 1684 time: 0.142s
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
int counter;

int dr[] = {1,1,0,-1,-1,-1,0,1};
int dc[] = {0,1,1,1,0,-1,-1,-1};

int floodfill(int r,int c,char ch1,char ch2)
{
    if(r<0||r>=counter||c<0||c>=input[r].size())
    {
        return 0;
    }
    if(input[r][c]!=ch1)
    {
        return 0;
    }
    input[r][c]=ch2;
    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],' ','#');
    }
    return 0;
}
void calculate()
{
    for(int i=0;i<counter;i++)
    {
        for(int j=0;j<(int)input[i].size();j++)
        {
            if(input[i][j]=='*')
            {
                floodfill(i,j,'*','#');
            }
        }
    }
}

void print()
{
    for(int i=0;i<counter;i++)
    {
        for(int j=0;j<(int)input[i].size();j++)
        {
            cout<<input[i][j];
        }
        cout<<endl;
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int N;
	string temp;
	while(cin>>N)
    {
        counter=0;
        getchar();
        while(N--)
        {
            counter=0;
            while(1)
            {
                getline(cin,temp);
                counter++;
                input.push_back(temp);
                if(temp[0]=='_')
                {
                    break;
                }
            }
            calculate();
            print();
            input.clear();
        }
    }

	return 0;
}
