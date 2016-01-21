/** accepted-127
 *
 * union find disjoint sets
 * rank-196 time- 0.089s
 * author- zaman
 * november 11,2013 10:08am
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

typedef vector<int>vi;

vi pset(100000);
int numberOfDisjointSet;
void initSet(int N)
{
    numberOfDisjointSet=N;
    pset.assign(N,0);
    for(int i=0;i<N;i++)
    {
        pset[i]=i;
    }
}

int findSet(int i)
{
    return ((pset[i]==i)? i : (pset[i]=findSet(pset[i])));
}

bool isSameSet(int i,int j)
{
    return findSet(i)==findSet(j);
}

void UnionSet(int i,int j)
{
    if(!isSameSet(i,j))
    {
        numberOfDisjointSet--;
        pset[findSet(i)]=findSet(j);
    }
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

    int cases;
    cin>>cases;
    vector<double>X;
    vector<double>Y;
    for(int counter=1;counter<=cases;counter++)
    {
        int numOfStar;
        cin>>numOfStar;
        initSet(numOfStar);
        double distance;
        cin>>distance;
        double x_axis,y_axis,temp_x,temp_y,comp;
        while(numOfStar--)
        {
            cin>>x_axis>>y_axis;
            X.push_back(x_axis);
            Y.push_back(y_axis);
        }

        for(int i=0;i<X.size()-1;i++)
        {
            for(int j=i+1;j<X.size();j++)
            {
                temp_x=(X[i]-X[j]);
                temp_x=temp_x*temp_x;
                temp_y=(Y[i]-Y[j]);
                temp_y=temp_y*temp_y;
                comp=temp_x+temp_y;
                comp=sqrt(comp);

                if(comp<=distance)
                {
                    UnionSet(i,j);
                }
            }
        }
        cout<<"Case "<<counter<<": "<<numberOfDisjointSet<<endl;
        pset.clear();
        X.clear();
        Y.clear();
    }
	return 0;
}
