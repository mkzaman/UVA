//id:12250
//name:language detection
//site:uva
//date:25/1/2012


#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char given[20];
    int t=1;
    while(cin>>given)
    {
        if(!strcmp(given,"#"))
        {
            break;
        }

        else  if(!strcmp(given,"HELLO"))
        {
            cout<<"Case "<<t<<": ENGLISH"<<endl;
        }
        else if(!strcmp(given,"HOLA"))
        {
            cout<<"Case "<<t<<": SPANISH"<<endl;
        }
        else if(!strcmp(given,"HALLO"))
        {
            cout<<"Case "<<t<<": GERMAN"<<endl;
        }
        else if(!strcmp(given,"BONJOUR"))
        {
            cout<<"Case "<<t<<": FRENCH"<<endl;
        }
        else if(!strcmp(given,"CIAO"))
        {
            cout<<"Case "<<t<<": ITALIAN"<<endl;
        }
        else if(!strcmp(given,"ZDRAVSTVUJTE"))
        {
            cout<<"Case "<<t<<": RUSSIAN"<<endl;
        }
        else
        {
            cout<<"Case "<<t<<": UNKNOWN"<<endl;
        }
        t++;
    }

return 0;
}
