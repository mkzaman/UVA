/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: Floodfill, BFS
 *  remarks: easy
 *  date: February 1st,2014 , time of acceptance: 7:32pm
 *  rank: 3688 time: 0.015s
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

typedef vector<char>vc;
vector<vc>input;

int result = 0;
int n;
int dr[] = {1,1,0,-1,-1,-1,0,1};
int dc[] = {0,1,1,1,0,-1,-1,-1};

int floodfill(int r,int c, char c1)
{
    if(r<0||r>=n||c<0||c>=n)
    {
        return 0;
    }
    if(input[r][c]=='0')
    {
        return 0;
    }
    if(input[r][c]=='1')
    {
        input[r][c]='0';
        for(int i=0;i<8;i++)
        {
            floodfill(r+dr[i],c+dc[i],'1');
        }
    }
    return 0;
}

void eagle()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(input[i][j]=='1')
            {
                floodfill(i,j,'1');
                result++;
            }
        }
    }

}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int N,counter=1;
	string temp;
	vc tempVector;

	while(cin>>N)
    {
        getchar();
        n=N;
        while(N--)
        {
            getline(cin,temp);
            for(int i=0;i<(int)temp.size();i++)
            {
                tempVector.push_back(temp[i]);
            }
            input.push_back(tempVector);
            tempVector.clear();
        }
        eagle();
        cout<<"Image number "<<counter<<" contains "<<result<<" war eagles."<<endl;
        counter++;
        result=0;
        input.clear();
    }
	return 0;
}
