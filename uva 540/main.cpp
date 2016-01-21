#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <cctype>
#include <cstring>
#include <typeinfo>
#include <exception>
#include <stdexcept>
#include <memory>
#include <fstream>
#include <string>
#include <sstream>
#include <functional>
#include <iterator>
#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <locale>
#include <limits>
#include <utility>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int counter=1;
    int number_of_team,number_of_member,members,command_value,nota,team_number;
    vector<int>teams[1050];
    deque<int>team_queue;
    string command;
    while(cin>>number_of_team)
    {

        if(!number_of_team)
        {
            return 0;
        }
        cout<<"Scenario #"<<counter<<endl;
        nota=number_of_team;

        for(int i=0;i<number_of_team;i++)
        {
            cin>>number_of_member;
            while(number_of_member--)
            {
                cin>>members;
                teams[i].push_back(members);
            }
        }


        while(cin>>command)
        {
               if(command=="DEQUEUE")
                {
                    cout<<team_queue.front()<<endl;
                    team_queue.pop_front();
                }
                else if(command=="STOP")
                {
                    cout<<endl;
                    break;
                }
                else
                {
                    cin>>command_value;
                    for(int i=0;i<nota;i++)
                    {
                        if(binary_search(teams[i].begin(),teams[i].end(),command_value))
                        {
                            team_number=i;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    deque<int>::reverse_iterator rit;
                    for(rit=team_queue.rbegin();rit!=team_queue.rend();rit++)
                    {
                        if(binary_search(teams[team_number].begin(),teams[team_number].end(),*rit))
                        {
                            team_queue.insert(rit.base(),command_value);
                            break;
                        }
                    }
                    if(rit==team_queue.rend())
                    {
                    team_queue.push_back(command_value);
                    }

                }
        }
        for(int i=0;i<1051;i++)
        {
            teams[i].clear();
        }
        team_queue=deque<int>();
        counter++;
    }

	return 0;
}
