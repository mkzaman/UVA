//name:perfection
//id:382
//site:uva
//date:17/1/2012

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long int given,total,i,j;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>given)
    {
        total=0;
        if(given==0)
        {
            break;
        }
        if((given%2)!=0)
        {
            for(i=3;i<=(given/2);i+=2)
            {
                if(given%i==0)
                {
                    total=total+i;
                }
            }
        }
        else
        {
            for(j=1;j<=(given/2);j++)
            {
                if(given%j==0)
                {
                    total=total+j;

                }
            }
        }
        if(total==given)
        {
            printf("%5lld  PERFECT\n",given);

        }
        else if(total>given)
        {
            printf("%5lld  ABUNDANT\n",given);
        }
        else
        {
            printf("%5lld  DEFICIENT\n",given);
        }
    }
    cout<<"END OF OUTPUT"<<endl;



return 0;
}
