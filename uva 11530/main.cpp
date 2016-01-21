//accepted

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    string given;
    int count,i,cases=1,check;
    while(cin>>check)
    {
        getchar();
        while(check--)
        {
            getline(cin,given);
            count=0;
            for(i=0;i<given.size();i++)
            {
                if(given[i]=='a'||given[i]=='d'||given[i]=='g'||given[i]=='j'||given[i]=='m'||given[i]=='p'||given[i]=='t'||given[i]=='w'||given[i]==' ')
                {
                    count++;
                }
                else if(given[i]=='b'||given[i]=='e'||given[i]=='h'||given[i]=='k'||given[i]=='n'||given[i]=='q'||given[i]=='u'||given[i]=='x')
                {
                    count +=2;
                }
                else if(given[i]=='c'||given[i]=='f'||given[i]=='i'||given[i]=='l'||given[i]=='o'||given[i]=='r'||given[i]=='v'||given[i]=='y')
                {
                    count +=3;
                }
                else
                {
                    count +=4;
                }
            }
            cout<<"Case #"<<cases<<": "<<count<<endl;
            cases++;
        }

    }
    return 0;
}
