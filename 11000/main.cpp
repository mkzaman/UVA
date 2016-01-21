//id:11000
//name: bee
//site : uva
//date: 22/12/2011
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    long long int male,female,tempm,tempf,total,cases;

    while(cin>>cases)
    {
        if(cases==0)
        {
            cout<<"0"<<" "<<"1"<<endl;
            continue;

        }
        if(cases<0)
        {
            break;
        }
        else
        {
            female=1;
            male=0;
            while(cases--)
            {
                tempf=1+male;
                tempm=female+male;
                male=tempm;
                female=tempf;
                total=male+female;
            }

        cout<<male<<" "<<total<<endl;
        }
    }
return 0;
}
