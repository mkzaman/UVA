
//name:factorial!you must be kidding
//id:10323
//site:uva
//date:14/1/2012

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{

    long long int  given,fact;
    while(cin>>given)
    {
        fact=1;
        if(given<0)
        {
            given=given*(-1);
            if(given%2==0)
            {
                cout<<"Underflow!"<<endl;
            }
            else
            {
                cout<<"Overflow!"<<endl;
            }
        }
        else if(given>-1&&given<8)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(given>7&&given<14)
        {
            while(given>0)
            {
                fact=fact*given;
                given--;
            }
            cout<<fact<<endl;
        }
        else
        {
            cout<<"Overflow!"<<endl;
        }

    }

return 0;
}
