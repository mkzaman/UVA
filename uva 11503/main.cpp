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

vector<int> pset,setSize(100010);



int findSet(int i)
{
    return ((pset[i]==i) ? i : pset[i]= findSet(pset[i]));
}

bool isSameSet(int i,int j)
{
    return findSet(i)==findSet(j);
}

void unionSet(int i,int j)
{
    if(!isSameSet(i,j))
    {
        setSize[findSet(j)] += setSize[findSet(i)];
        pset[findSet(i)] = findSet(j);
    }
}

int numOfSizeOfSet(int i)
{
    return setSize[findSet(i)];
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

    int cases;
    vector<string>frnds;
    cin>>cases;
    while(cases--)
    {
        int number_of_frndship;
        cin>>number_of_frndship;
        while(number_of_frndship--)
        {
            string habi,jabi;
            cin>>habi>>jabi;
            int see1=0,see2=0,m,n,i;
            for(i=0;i<frnds.size();i++)
            {
                if(frnds[i]==habi)
                {
                    see1=1;
                    m=i;
                }
                else if(frnds[i]==jabi)
                {
                    see2=1;
                    n=i;
                }
            }
            if(see1==0)
            {
                see1=2;
                frnds.push_back(habi);
                m=i;
                pset.push_back(m);
                setSize[m]++;
            }
            if(see2==0)
            {
                if(see1==2)
                {
                    frnds.push_back(jabi);
                    n=i+1;
                }
                else
                {
                    frnds.push_back(jabi);
                    n=i;
                }
                pset.push_back(n);
                setSize[n]++;
            }
            unionSet(m,n);
            cout<<numOfSizeOfSet(m)<<endl;
        }
        frnds.clear();
        pset.clear();
        setSize.clear();
    }

	return 0;
}
