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

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int given;
    int a = 1234;
    set<int>checker;
    vector<int>warehouse;
    while(a!=98766)
    {
        int x=a;
        int b=0;
        while(x)
        {
            checker.insert(x%10);
            x/=10;
            b++;
        }
        if(b!=5)
        {
            checker.insert(0);
            b++;
        }

        if(checker.size()==5)
        {
            warehouse.push_back(a);
        }
        checker.clear();
        a++;
    }
    int bal=0;
    while(cin>>given)
    {
        if(!given)
        {
            return 0;
        }
        if(bal>0)
        {
            cout<<endl;
        }
        map<int,int>result;
        int abcde;
        for(int i=0;i<(int)warehouse.size();i++)
        {
            int z = warehouse[i];  ///delete it
            abcde=warehouse[i]*given;
            if(abcde>98765)
            {
                break;
            }
            else
            {
                if(find(warehouse.begin(),warehouse.end(),abcde)!=warehouse.end())
                {
                    int take=0;
                    int p = abcde;
                    while(p)
                    {
                        checker.insert(p%10);
                        p/=10;
                        take++;
                    }
                    if(take!=5)
                    {
                        checker.insert(0);
                    }
                    take=0;
                    while(z)
                    {
                        checker.insert(z%10);
                        z/=10;
                        take++;
                    }
                    if(take!=5)
                    {
                        checker.insert(0);
                    }
                    if(checker.size()==10)
                    {
                        result[abcde]=warehouse[i];
                    }
                    checker.clear();
                }
            }
        }
        if(result.size()==0)
        {
            cout<<"There are no solutions for "<<given<<"."<<endl;
        }
        else
        {
            for(map<int,int>::iterator it=result.begin();it!=result.end();it++)
            {
                if(it->first<10000)
                {
                    cout<<"0";
                }
                cout<<it->first<< " / ";
                if(it->second<10000)
                {
                    cout<<"0";
                }
                cout<<it->second<<" = "<<given<<endl;
            }
        }
        bal++;
        result.clear();
    }

	return 0;
}












