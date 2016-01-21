//accepted
//adhoc
//date:13/5/13

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    string experimental_data;
    int cases,temp;
    while(cin>>cases)
    {
        while(cases--)
        {
            cin>>experimental_data;
            temp=experimental_data.size();
            if(experimental_data=="1"||experimental_data=="4"||experimental_data=="78")
            {
                cout<<"+"<<endl;
            }
            else if(experimental_data[temp-1]=='5'&&experimental_data[temp-2]=='3')
            {
                cout<<"-"<<endl;
            }
            else if(experimental_data[0]=='1'&&experimental_data[1]=='9'&&experimental_data[2]=='0')
            {
                cout<<"?"<<endl;
            }
            else
            {
                cout<<"*"<<endl;
            }
        }
    }

    return 0;
}
