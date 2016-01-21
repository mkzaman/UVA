#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<string>kotha;
    vector<int>number;
    int check,i;
    string command;
    while(1)
    {
        while(cin>>check)
        {
            if(check==0)
            {
                return 0;
            }
            number.push_back(check);
            getline(cin,command);
            getchar();
            kotha.push_back(command);
            if(command=="right on")
            {
                break;
            }
        }
        for( i=0;i<number.size();i++)
        {
            if(number[i]>check)
            {
                if(kotha[i]=="too high")
                {
                    continue;
                }
                else
                {
                    cout<<"Stan is dishonest"<<endl;
                    break;
                }
            }
            if(number[i]<check)
            {
                if(kotha[i]=="too low")
                {
                    continue;
                }
                else
                {
                    cout<<"Stan is dishonest"<<endl;
                }
            }
        }
        if(i==number.size())
        {
            cout<<"Stan may be honest"<<endl;
        }
        number.clear();
        kotha.clear();
    }
    return 0;
}
