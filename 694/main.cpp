//date:17/1/2012
//name:the collatz sequence
//id:694
//site:uva

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    long long int given,limit,a,count,cases=1;
    while(cin>>given>>limit)
    {
        if(given<0&&limit<0)
        {
            break;
        }
        a=given;
        count=1;
        while(a!=1)
        {
            if(a%2==0)
            {
                a/=2;
                count++;
            }
            else
            {
                a=3*a+1;
                if(a>limit)
                {
                    break;
                }
                count++;
            }

        }
        cout<<"Case "<<cases<<": A = "<<given<<", limit = "<<limit<<", number of terms = "<<count<<endl;
        cases++;
    }

return 0;
}
