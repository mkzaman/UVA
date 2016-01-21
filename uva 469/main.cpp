/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: Flood-Fill
 *  remarks: careful about multiple input, use to vector
 *  date: February 1,2014 , time of acceptance: 9:08 pm
 *  rank: 505 time: 0.086s
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
vector<vc>input,copyOfInput;
typedef pair<int,int>pii;
vector<pii>locations;

int dr[] = {1,1,0,-1,-1,-1,0,1};
int dc[] = {0,1,1,1,0,-1,-1,-1};
int Row,Column,result;

int floodfill(int r,int c,char c1)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(copyOfInput[r][c]=='L')
    {
        return 0;
    }
    copyOfInput[r][c] = 'L';
    result++;
    for(int i=0;i<8;i++)
    {
        floodfill(r+dr[i],c+dc[i],'W');
    }
    return 0;

}

void calculate()
{
    for(int i=0;i<(int)locations.size();i++)
    {
        copyOfInput=input;
        floodfill(locations[i].first-1,locations[i].second-1,'W');
        cout<<result<<endl;
        result=0;
    }
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string temp;
	vc tempVector;
	pii tempPair;

	int cases;
	while(cin>>cases)
    {
        getchar();
        getchar();

        while(cases--)
        {
            result=0;
            Row=0;
            Column=0;
            while(getline(cin,temp)&&temp.size())
            {
                if(temp[0]=='L'||temp[0]=='W')
                {
                    Column=temp.size();
                    for(int i=0;i<(int)temp.size();i++)
                    {
                        tempVector.push_back(temp[i]);
                    }
                    input.push_back(tempVector);
                    tempVector.clear();
                    Row++;
                }
                else
                {
                    stringstream ss(temp);
                    while(ss>>tempPair.first>>tempPair.second)
                    {
                        locations.push_back(tempPair);
                    }
                }
            }
            calculate();
            if(cases>0)
            {
                cout<<endl;
            }
            input.clear();
            locations.clear();
        }
    }

	return 0;
}
