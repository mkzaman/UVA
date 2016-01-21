//accepted
//ad hoc

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int number_of_people,count=0,amount_of_money,taka_khor,taka_taka;
    string temp,giver,reciever;
    vector<string>people;
    vector<int>the_money;
    while(cin>>number_of_people)
    {
        the_money.clear();
        people.clear();
        if(count>0)
        {
            cout<<endl;
        }
        for(int i=0;i<number_of_people;i++)
        {
            cin>>temp;
            people.push_back(temp);
            the_money.push_back(0);
        }
        while(number_of_people--)
        {
            cin>>giver>>amount_of_money>>taka_khor;
            if(taka_khor==0)
            {
                continue;
            }
            int roilo_baki=amount_of_money%taka_khor;
            roilo_baki=amount_of_money-roilo_baki;
            for(int i=0;i<people.size();i++)
            {
                if(people[i]==giver)
                {
                    the_money[i] = the_money[i]-roilo_baki;
                }
            }

            for(int j=0;j<taka_khor;j++)
            {
                cin>>reciever;
                taka_taka=amount_of_money/taka_khor;
                for(int i=0;i<people.size();i++)
                {
                    if(people[i]==reciever)
                    {
                        the_money[i]= the_money[i]+taka_taka;
                    }
                }
            }
        }
        for(int i=0;i<people.size();i++)
        {
            cout<<people[i]<<" "<<the_money[i]<<endl;
        }
        count++;


    }
    return 0;
}
