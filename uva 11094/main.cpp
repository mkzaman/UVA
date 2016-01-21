/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: modified floodfill
 *  remarks: tricky case while c=0 and c=m-1
 *  date: February 13, time of acceptance: 4:33 pm
 *  rank: 909 time: 0.019s
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
vector<string>input;
vector<int>regions;
int counter;
int dr[]={0,0,1,-1};
int dc[]={-1,1,0,0};

int floodfill(int r,int c,char ch1,char ch2)
{
    if(r<0||r>=Row||c<0||c>Column)
    {
        return 0;
    }
    if(input[r][c]!=ch1)
    {
        return 0;
    }
    input[r][c]=ch2;
    counter++;
    if(c==0)
    {
        floodfill(r,Column-1,ch1,ch2);
    }
    if(c==Column-1)
    {
        floodfill(r,0,ch1,ch2);
    }
    for(int i=0;i<4;i++)
    {
        floodfill(r+dr[i],c+dc[i],ch1,ch2);
    }

    return 0;
}


void calculate(char ch1,char ch2)
{
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]!=Column)
            {
                counter=0;
                floodfill(i,j,ch1,ch2);
                regions.push_back(counter);
            }
        }
    }

}
int main()
{
    int pos1,pos2,checker;
    string temp;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    while(cin>>Row>>Column)
    {
        getchar();
        for(int i=0;i<Row;i++)
        {
            getline(cin,temp);
            input.push_back(temp);
        }
        cin>>pos1>>pos2;
        char ch2;
        char ch1=input[pos1][pos2];
        checker=0;
        for(int i=0;i<Row;i++)
        {
            for(int j=0;j<Column;j++)
            {
                if(input[i][j]!=ch1)
                {
                    ch2=input[i][j];
                    checker=1;
                    break;
                }
            }
            if(checker==1)
            {
                break;
            }
        }
        floodfill(pos1,pos2,ch1,ch2);
        calculate(ch1,ch2);
        sort(regions.rbegin(),regions.rend());
        if(regions.size()==0)
        {
            cout<<'0'<<endl;
        }
        else
        cout<<regions[0]<<endl;
        input.clear();
        regions.clear();
        getchar();
    }
	return 0;
}
