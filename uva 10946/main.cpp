/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: February 12,2014 , time of acceptance: 10:37pm
 *  rank: 1213 time: 0.039s
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
int dr[]={0,0,1,-1};
int dc[]={-1,1,0,0};
vector<pair <char,int> >result;
int counter;

bool cmp(pair<char,int>i,pair<char,int>j)
{
    if(i.second==j.second)
    {
         return i.first<j.first;
    }
    return i.second>j.second;
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
    counter++;
    for(int i=0;i<4;i++)
    {
        floodfill(r+dr[i],c+dc[i],ch1,ch2);
    }
    return 0;
}


void calculate()
{
    pair<char,int>temp;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]!='.')
            {

                counter=0;
                temp.first=input[i][j];
                floodfill(i,j,input[i][j],'.');
                temp.second=counter;
                result.push_back(temp);
            }
        }
    }
}

int main()
{
	//freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int looper=1;
    while(cin>>Row>>Column)
    {
        if(!Row&&!Column)
        {
            return 0;
        }
        getchar();
        string temp;

        for(int i=0;i<Row;i++)
        {
            cin>>temp;
            input.push_back(temp);
        }
        calculate();
        sort(result.begin(),result.end(),cmp);
        cout<<"Problem "<<looper<<":"<<endl;
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i].first<<" "<<result[i].second<<endl;
        }
        input.clear();
        result.clear();
        looper++;
    }

	return 0;
}
