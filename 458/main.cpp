//id:458
//name:the decoder
//site:uva
//date:17/1/2012

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char input[10000],output[10000];
    int len,i;
    while(gets(input))
    {
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            output[i]=input[i]-7;
        }
        output[i]='\0';
        puts(output);


    }


return 0;
}
