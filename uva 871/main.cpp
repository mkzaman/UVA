/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: February 7,2014, time of acceptance: 8:05pm
 *  rank: 929 time: 0.012s
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
vector<int>result;
int counter=0,Row,Column;
int dr[]={0,0,1,1,1,-1,-1,-1};
int dc[]={1,-1,0,1,-1,0,1,-1};
int floodfill(int r,int c,char ch1,char ch2)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(input[r][c]!=ch1)
    {
        return 0;
    }
    input[r][c]=ch2;
    counter++;

    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch1,ch2);
    }
}

void calculate()
{
    for(int i=0;i<(int)input.size();i++)
    {
        for(int j=0;j<(int)input[i].size();j++)
        {
            if(input[i][j]=='1')
            {
                floodfill(i,j,'1','0');
                result.push_back(counter);
                counter=0;
            }
        }
    }
    if(counter==0)
    {
        result.push_back(0);
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int cases;
	string temp;
	while(cin>>cases)
    {
        getchar();
        getchar();
        while(cases--)
        {
            Row=Column=0;
            while(getline(cin,temp)&&temp.size())
            {
                Column=temp.size();
                input.push_back(temp);
                Row++;
            }
            calculate();
            sort(result.rbegin(),result.rend());
            cout<<result[0]<<endl;
            if(cases>0)
            {
                cout<<endl;
            }
            result.clear();
            input.clear();
        }
    }



	return 0;
}
