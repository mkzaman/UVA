#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int win[110],loose[110];
    double double_win,double_loose;
    double result;
    int n_player,k_rock_scissors_paper,player_1,player_2,count=0;
    string move_1,move_2;
    while(cin>>n_player)
    {

        memset(win,0,sizeof(win));
        memset(loose,0,sizeof(loose));
        if(n_player==0)
        {
            return 0;
        }
        if(count>0)
        {
            cout<<endl;
        }

        cin>>k_rock_scissors_paper;
        k_rock_scissors_paper=(k_rock_scissors_paper*n_player*(n_player-1))/2;
        while(k_rock_scissors_paper--)
        {
            cin>>player_1>>move_1>>player_2>>move_2;
            if((move_1=="paper"&&move_2=="rock")||(move_1=="scissors"&&move_2=="paper")||(move_1=="rock"&&move_2=="scissors"))
            {
                win[player_1]++;
                loose[player_2]++;
            }
            else if((move_2=="paper"&&move_1=="rock")||(move_2=="scissors"&&move_1=="paper")||(move_2=="rock"&&move_1=="scissors"))
            {
                win[player_2]++;
                loose[player_1]++;
            }
        }
        count=0;
        for(int i=1;i<=n_player;i++)
        {
            double_win=win[i];
            double_loose=loose[i];
            if((double_win+double_loose)==0.0)
            {
                cout<<"-"<<endl;
                continue;
            }
            result=(double_win)/(double_win+double_loose);
            printf("%0.3f\n",result);
        }
        count++;
    }
    return 0;
}
