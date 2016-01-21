//name:event's planning
//id: 11559
//site:uva
//date:23/06/2012


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
    long long int number_of_participant,budget,noh,now,hotels[20],rent;
    long long int needed,i,x;
    while(cin>>number_of_participant)
    {
        x=0;
        cin>>budget>>noh>>now;
        while(noh--)
        {

            cin>>rent;
            for(i=0;i<now;i++)
            {
                cin>>hotels[i];
            }
            sort(hotels,hotels+now);
            if(hotels[0]<number_of_participant)
            {
                continue;
            }
            needed=number_of_participant*rent;
            if(needed<=budget)
            {
                swap(needed,budget);
                x=1;
            }

        }
        if(x==1)
        {
            cout<<budget<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }


    }


return 0;
}
