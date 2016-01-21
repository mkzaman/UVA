#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    string given,final;
    while(cin>>given)
    {
        for(i=0;i<given.size();i++)
        {
            if(given[i]=='1')
            {
                final[i]='`';
            }
            else if(given[i]=='2')
            {
                final[i]='1';
            }
            else if(given[i]=='3')
            {
                final[i]='2';
            }
            else if(given[i]=='4')
            {
                final[i]='3';
            }
            else if(given[i]=='5')
            {
                final[i]='4';
            }
            else if(given[i]=='6')
            {
                final[i]='5';
            }
            else if(given[i]=='7')
            {
                final[i]='6';
            }
            else if(given[i]=='8')
            {
                final[i]='7';
            }
            else if(given[i]=='9')
            {
                final[i]='8';
            }
            else if(given[i]=='0')
            {
                final[i]='9';
            }
            else if(given[i]=='-')
            {
                final[i]='0';
            }
            else if(given[i]=='=')
            {
                final[i]='-';
            }
            else if(given[i]=='w')
            {

            }



        }
    }
    return 0;
}
