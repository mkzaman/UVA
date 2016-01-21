
/*
    shuvo, 8th june 2013
    adhoc
    uva 11332
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long int given,answer,temp;
    while(scanf("%lu",&given)!=EOF)
    {
        if(!given)
        {
            return 0;
        }
        if(given<10)
        {
            cout<<given<<endl;
        }
        else
        {

            while(given>=10)
            {
                answer=0;
                temp=given;
                while(temp!=0)
                {
                    answer+=(temp%10);
                    temp=temp/10;
                }
                given=answer;

            }
            cout<<given<<endl;
        }
    }
    return 0;
}
