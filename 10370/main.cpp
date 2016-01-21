//id:10370
//name:avobe average
//site:uva
//date:2/1/2011

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases , nos;
    float marks[1050],total,avg,ans,count;
    cin>>cases;
    while(cases--)
    {
        count=0;
        total=0;
        cin>>nos;
        for(int i=0;i<nos;i++)
        {
            cin>>marks[i];
            total=total+marks[i];
        }
        avg=total/nos;
        for(int j=0;j<nos;j++)
        {
            if(marks[j]>avg)
            {
                count++;
            }
        }
        ans=(count/nos)*100;
        printf("%.3f%%",ans);
        cout<<endl;


    }

return 0;
}
