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
vector<string>input;
vector<int>result;
int Column,Row,counter=1,tempresult;

int dr[]={1,1,0,-1,-1,-1,0,1};
int dc[]={0,1,1,1,0,-1,-1,-1};

int drx[]={0,0,-1,1};
int dcx[]={1,-1,0,0};

int floodx(int r,int c,char ch1,char ch2)
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
    for(int i=0;i<4;i++)
    {
        floodx(r+drx[i],c+dcx[i],ch1,ch2);
    }
    return 0;

}

int floodfill(int r,int c, char ch1,char ch2)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(input[r][c]=='.')
    {
        return 0;
    }
    if(input[r][c]=='X')
    {
        tempresult++;
        floodx(r,c,'X','.');
    }
    input[r][c]=ch2;
    for(int i=0;i<8;i++)
    {
        floodfill(r+dr[i],c+dc[i],'*','.');
    }

    return 0;

}

void calculate()
{
    tempresult=0;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]=='*')
            {
                floodfill(i,j,'*','.');
                result.push_back(tempresult);
                tempresult=0;
            }
        }
    }
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]=='X')
            {
                tempresult++;
                floodx(i,j,'X','.');
                result.push_back(tempresult);
                tempresult=0;
            }
        }
    }
}

void print()
{
    cout<<"Throw "<<counter<<endl;
    sort(result.begin(),result.end());
    for(int i=0;i<(int)result.size();i++)
    {
        if(i!=0)
        {
            cout<<" ";
        }
        cout<<result[i];
    }
    cout<<endl<<endl;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


    string temp;
    while(cin>>Column>>Row)
    {
        getchar();
        if(!Column&&!Row)
        {
            return 0;
        }
        for(int i=0;i<Row;i++)
        {
            getline(cin,temp);
            input.push_back(temp);
        }
        calculate();
        print();
        counter++;
        input.clear();
        result.clear();
    }
	return 0;
}
