//id:10945
//name:mother bear
//site:uva
//date:13/1/2011
#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    char given[1000],temp[1000];
    int i,j,x,y;
    while(gets(given))
    {
        if(strcmp(given,"DONE")==0)
        {
            break;
        }
        y=strlen(given);
        i=0;
        j=0;
        while(y--)
        {
            if(given[i]>64&&given[i]<91)
            {
                given[i]=given[i]+32;

            }
            if(given[i]>96&&given[i]<123)
            {
                temp[j]=given[i];
                j++;
            }
            i++;
        }
        temp[j]='\0';
        j=strlen(temp);
        x=j-1;
        for(i=0;i<j/2;i++,x--)
        {
            if(temp[i]!=temp[x])
            {
                break;
            }
        }
        if(i==j/2)
        {
            cout<<"You won't be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;
        }
    }
return 0;
}
