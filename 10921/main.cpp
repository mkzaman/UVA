//id:10921
//name:find the telephone
//site:uva
//date:29/12/2011

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    char given[100],ans[100];
    int len,i;

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(gets(given))
    {
        len=strlen(given);
        for(i=0;i<len;i++)
        {
            if(given[i]=='1'||given[i]=='0'||given[i]=='-')
            {
                ans[i]=given[i];
            }
            else if(given[i]=='A'||given[i]=='B'||given[i]=='C')
            {
                ans[i]='2';
            }
            else if(given[i]=='D'||given[i]=='E'||given[i]=='F')
            {
                ans[i]='3';
            }
            else if(given[i]=='G'||given[i]=='H'||given[i]=='I')
            {
                ans[i]='4';
            }
            else if(given[i]=='J'||given[i]=='K'||given[i]=='L')
            {
                ans[i]='5';
            }
            else if(given[i]=='M'||given[i]=='N'||given[i]=='O')
            {
                ans[i]='6';
            }
            else if(given[i]=='P'||given[i]=='Q'||given[i]=='R'||given[i]=='S')
            {
                ans[i]='7';
            }
            else if(given[i]=='T'||given[i]=='U'||given[i]=='V')
            {
                ans[i]='8';
            }
            else if(given[i]=='W'||given[i]=='X'||given[i]=='Y'||given[i]=='Z')
            {
                ans[i]='9';
            }
        }
        ans[i]='\0';

        puts(ans);

    }

return 0;
}
