//date:13/1/2012
//name:prime words
//id:10924
//site:uva

#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;



int main()
{

    int total,len,i,j,chk;
    char given[100];
    while(gets(given))
    {
        total=0;
        len=strlen(given);
        for(i=0;i<len;i++)
        {
            if(given[i]>96&&given[i]<123)
            {
                total=total+(given[i]-96);
            }
            else
            {
                total=total+(given[i]-38);
            }
        }
        if(total<=3)
        {
            cout<<"It is a prime word."<<endl;
        }
        else
        {
            chk=int(sqrt((double)total));
            for(j=2;j<=chk;j++)
            {
                if(total%j==0)
                {
                    cout<<"It is not a prime word."<<endl;
                    j=j+50;
                    break;
                }
            }
            if(j==chk||j==chk+1)
            cout<<"It is a prime word."<<endl;

        }
    }

return 0;
}


