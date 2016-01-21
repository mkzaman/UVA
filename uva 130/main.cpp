#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int number_of_people,killing_number,that_lucky_bastard;
    int killing_flag;
    vector<int>position;
    while(cin>>number_of_people>>killing_number)
    {
        if(!(number_of_people&&killing_number))
        {
            return 0;
        }
        for(i=0;i<=number_of_people;i++)
        {
            position.push_back(i);
        }
        killing_flag=1;
        while(position.size()!=2)
        {

        }
    }
    return 0;
}
