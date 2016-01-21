#include <iostream>
#include <list>
#include <cstdio>
using namespace std;
int josephous(int N,int m)
{
    list<int>lokjon;

    for(int i=1;i<=N;i++)
    {
        lokjon.push_back(i);
    }
    while(lokjon.size()>1)
    {
        lokjon.pop_front();
        for(int i=1;i<m;i++)
        {
            lokjon.push_back(lokjon.front());
            lokjon.pop_front();
        }
    }
    return lokjon.front();
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N,m,result;
    while(cin>>N)
    {
        if(!N)
        {
            return 0;
        }
        m=1;
        while(1)
        {
            result=josephous(N,m);
            if(result==2)
            {
                break;
            }
            m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
