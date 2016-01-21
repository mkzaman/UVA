//shuvo
//id:10783
//name:odd sum
//site:uva
//date:2/1/2011

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t,a,b,total,count=1,temp;
    cin>>t;
    while(t--)
    {
        total=0;
        cin>>a>>b;
        for(temp=a;temp<=b;temp++)
        {
            if(temp%2==1)
            {
                total=total+temp;
            }
        }
        cout<<"Case "<<count<<": "<<total<<endl;
        count++;
    }
return 0;
}
