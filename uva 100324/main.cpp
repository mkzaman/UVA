#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string a;
    int one,two,min,max,cases,check=1,i;
    while(cin>>a)
    {
        if(a=="\n")
        {
            return 0;
        }
        cin>>cases;
        cout<<"Case "<<check<<":"<<endl;
        while(cases--)
        {

            cin>>one>>two;
            if(one>two)
            {
                max=one;
                min=two;
            }
            else
            {
                max=two;
                min=one;
            }

            for(i=min;i<=max;i++)
            {
                if(a[i]!=a[min])
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(i-1==max)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        check++;
        a.clear();

    }
    return 0;
}
