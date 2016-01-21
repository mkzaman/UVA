//id:12289
//site:uva
//name:one  two three
//date:25/1/2012


#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int c,len,count;
    char given[10];
    cin>>c;
    while(c--)
    {
        count=0;
        cin>>given;
        len=strlen(given);
        if(len==5)
        {
            cout<<"3"<<endl;
        }
        else
        {
            if(given[0]=='o')
            {
                count++;
            }
            if(given[1]=='n')
            {
                count++;
            }
            if(given[2]=='e')
            {
                count++;
            }
            if(count==2||count==3)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }


        }
    }
return 0;
}
