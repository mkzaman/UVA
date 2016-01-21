//accepted
//adhoc

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string abalchabal,temp;
    int counter_array_odd,counter_array_even,cases;
    int sum;
    while(cin>>cases)
    {
        while(cases--)
        {
            sum=0;
            for(int i=0;i<4;i++)
            {
                cin>>temp;
                abalchabal +=temp;
            }
            for(int i=0;i<8;i++)
            {
                counter_array_odd= (abalchabal[2*i]-'0')*2;
                if(counter_array_odd>9)
                {
                    counter_array_odd= 1+ (counter_array_odd%10);
                }
                sum+=counter_array_odd;
                counter_array_even=(abalchabal[(2*i)+1]-'0');
                sum+=counter_array_even;
            }
            abalchabal.clear();
           if((sum%10)==0)
           {
               cout<<"Valid"<<endl;
           }
           else
           {
               cout<<"Invalid"<<endl;
           }
        }

    }
    return 0;
}
