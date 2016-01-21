#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>snake_mouth,snake_tail,ladd_start,ladd_end;
    vector<int>token_position;
    long long int number_of_player,number_of_snakes,number_die_rolls;
    long long int cases,start,end,temp2,temp,die_roll,mod,flag,vut,j;

    while(cin>>cases){
        while(cases--)
        {

            cin>>number_of_player>>number_of_snakes>>number_die_rolls;
            while(number_of_snakes--)
            {
                cin>>start>>end;
                if(start>end)
                {
                    snake_mouth.push_back(start);
                    snake_tail.push_back(end);
                }
                else
                {
                    ladd_start.push_back(start);
                    ladd_end.push_back(end);
                }
            }
            temp=number_die_rolls;
            temp2=number_of_player;
            while(temp2--)
            {
                token_position.push_back(1);
            }
            for( j=0;j<number_die_rolls;j++)
            {
                flag=0;
                cin>>die_roll;
                mod=(j+1)%number_of_player;
                if(mod==0)
                {
                    token_position[number_of_player-1]=token_position[number_of_player-1]+die_roll;
                    for(int i=0;i<snake_mouth.size();i++)
                    {
                        if((token_position[number_of_player-1])==snake_mouth[i])
                        {
                            token_position[number_of_player-1]=snake_tail[i];
                            flag=1;
                            break;
                        }
                    }
                    for(int i=0;i<ladd_start.size();i++)
                    {
                        if(flag==1)
                        {
                            break;
                        }
                        if((token_position[number_of_player-1])==ladd_start[i])
                        {
                            token_position[number_of_player-1]=ladd_end[i];
                            break;
                        }
                    }
                    if(token_position[number_of_player-1]>=100)
                    {
                        token_position[number_of_player-1]=100;
                        vut=temp-(j+1);
                        while(vut--)
                        {
                            cin>>die_roll;
                        }
                        break;
                    }

                }
                else
                {
                    token_position[mod-1]=token_position[mod-1]+die_roll;
                    for(int i=0;i<snake_mouth.size();i++)
                    {
                        if((token_position[mod-1])==snake_mouth[i])
                        {
                            token_position[mod-1]=snake_tail[i];
                            flag=1;
                            break;
                        }
                    }
                    for(int i=0;i<ladd_start.size();i++)
                    {
                        if(flag==1)
                        {
                            break;
                        }
                        if((token_position[mod-1])==ladd_start[i])
                        {
                            token_position[mod-1]=ladd_end[i];
                            break;
                        }
                    }
                    if(token_position[mod-1]>=100)
                    {
                        token_position[mod-1]=100;
                        vut=temp-(j+1);
                        while(vut--)
                        {
                            cin>>die_roll;
                        }
                        break;
                    }
                }

            }
            for(int i=1;i<=number_of_player;i++)
            {
                cout<<"Position of player "<<i<<" is "<<token_position[i-1]<<"."<<endl;
            }
            snake_mouth.clear();
            snake_tail.clear();
            ladd_start.clear();
            ladd_end.clear();
            token_position.clear();

        }
    }
    return 0;
}
