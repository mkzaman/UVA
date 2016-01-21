/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: Floodfill
 *  remarks:
 *  date: February 7,2014 , time of acceptance: 11:45pm
 *  rank: 1976  time: 0.009s
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
int Row,Column;
vector< pair < char,int > >godown;
int dr[]={0,0,-1,1};
int dc[]={1,-1,0,0};

bool cmp(pair<char,int>i,pair<char,int>j)
{
    if(i.second==j.second)
    {
        return i.first<j.first;
    }
    else
    {
        return i.second>j.second;
    }
}

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
    for(int d=0;d<4;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch1,ch2);
    }
    return 0;
}
void calculate()
{
    pair<char,int>temp;
    char ch;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]>='a'&&input[i][j]<='z')
            {
                int k;
                for(k=0;k<(int)godown.size();k++)
                {
                    if(godown[k].first==input[i][j])
                    {
                        godown[k].second++;
                        break;
                    }
                }
                if(k==(int)godown.size())
                {
                    temp.first=input[i][j];
                    temp.second=1;
                    godown.push_back(temp);
                }
                ch=input[i][j];
                floodfill(i,j,ch,'.');
            }
        }
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	string temp;
    int cases,counter;

    while(cin>>cases)
    {
        for(counter=1;counter<=cases;counter++)
        {
            cin>>Row>>Column;
            getchar();
            for(int i=0;i<Row;i++)
            {
                getline(cin,temp);
                input.push_back(temp);
            }
            calculate();
            sort(godown.begin(),godown.end(),cmp);
            cout<<"World #"<<counter<<endl;
            for(int k=0;k<godown.size();k++)
            {
                cout<<godown[k].first<<": "<<godown[k].second<<endl;
            }
            input.clear();
            godown.clear();

        }
    }


	return 0;
}
