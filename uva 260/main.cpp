/** verdict: ACCEPTED (WA)
 *  author: zaman
 *  used algorithm: flood fill, backtrack
 *  remarks: always clear your vector
 *  date: 1/2/2014, time of acceptance: 00:49
 *  rank: 887 time: 0.086
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
int lagbe;
set<int>check;
int dr[]={-1,-1,0,0,1,1};
int dc[]={-1,0,-1,1,0,1};
int floodfill(int r,int c,char c1)
{
    if(r<0||r>=lagbe||c<0||c>=lagbe)
    {
        return 0;
    }
    if(input[r][c] != c1)
    {
        return 0;
    }
    else
    {
        check.insert(c);
        input[r][c]='.';
        for(int i=0;i<6;i++)
        {
            floodfill(r+dr[i],c+dc[i],c1);
        }
    }
    return 0;
}
char winner()
{

    char r1='W';
    char r2='B';
    int i;
    //for white
    for(i=0;i<lagbe;i++)
    {
        if(input[i][0]=='w')
        {
            floodfill(i,0,'w');
        }
        if((int)check.size()==lagbe)
        {
            check.clear();
            return r1;
            break;
        }
        check.clear();
    }
    if(i==lagbe)
    {
        check.clear();
        return r2;
    }

}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int N,counter=1;
	string temp;
	vc tempvector;
	char result;
	while(cin>>N)
    {
        if(!N)
        {
            return 0;
        }
        lagbe=N;
        getchar();
        while(N--)
        {
            getline(cin,temp);
            for(int i=0;i<(int)temp.size();i++)
            {
                tempvector.push_back(temp[i]);
            }
            input.push_back(tempvector);
            tempvector.clear();
        }
        result=winner();
        cout<<counter<<" "<<result<<endl;
        counter++;
        input.clear();
    }

	return 0;
}
