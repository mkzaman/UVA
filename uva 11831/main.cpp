/** verdict: ACCEPTED (WA, WA)
 *  author: zaman
 *  used algorithm: implicit graph
 *  remarks: be careful about increment and decrement operator while using it
 *  date: January 11, 2014 , time of acceptance: 1:14 pm
 *  rank: 487 time: 0.086s
 *
 */

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef vector<char>vc;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int row,column,numOfCommands,x,y,tcktNum;
    char position;
    while(cin>>row>>column>>numOfCommands)
    {
        if(!row&&!column&&!numOfCommands)
        {
            return 0;
        }
        vector<vc>arena;
        vc tempvector;
        getchar();
        for(int i=0;i<row;i++)
        {
            string input;
            getline(cin,input);
            for(int j=0;j<(int)input.size();j++)
            {
                if(input[j]=='N'||input[j]=='S'||input[j]=='L'||input[j]=='O')
                {
                    x=i;
                    y=j;
                    position=input[j];
                    input[j]='.';
                }

                tempvector.push_back(input[j]);
            }
            arena.push_back(tempvector);
            tempvector.clear();
        }
        string commands;
        getline(cin,commands);
        tcktNum=0;
        for(int i=0;i<numOfCommands;i++)
        {
            if(commands[i]=='D')
            {
                if(position=='N')
                {
                    position='L';
                }
                else if(position=='L')
                {
                    position='S';
                }
                else if(position=='S')
                {
                    position='O';
                }
                else if(position=='O')
                {
                    position='N';
                }
            }
            else if(commands[i]=='E')
            {
                if(position=='N')
                {
                    position='O';
                }
                else if(position=='O')
                {
                    position='S';
                }
                else if(position=='S')
                {
                    position='L';
                }
                else if(position=='L')
                {
                    position='N';
                }
            }
            else if(commands[i]=='F')
            {


                if(position=='N')
                {
                    if(x-1<0)
                    {
                        continue;
                    }
                    else if(arena[x-1][y]=='#')
                    {
                        continue;
                    }
                    else if(arena[x-1][y]=='.')
                    {
                        x--;
                    }
                    else if(arena[x-1][y]=='*')
                    {
                        tcktNum++;
                        arena[x-1][y]='.';
                        x--;
                    }
                }
                else if(position=='S')
                {
                    if(x+1>row-1)
                    {
                        continue;
                    }
                    else if(arena[x+1][y]=='#')
                    {
                        continue;
                    }
                    else if(arena[x+1][y]=='.')
                    {
                        x++;
                    }
                    else if(arena[x+1][y]=='*')
                    {
                        tcktNum++;
                        arena[x+1][y]='.';
                        x++;
                    }
                }
                else if(position=='L')
                {
                    if(y+1>column-1)
                    {
                        continue;
                    }
                    else if(arena[x][y+1]=='#')
                    {
                        continue;
                    }
                    else if(arena[x][y+1]=='.')
                    {
                        y++;
                    }
                    else if(arena[x][y+1]=='*')
                    {
                        tcktNum++;
                        arena[x][y+1]='.';
                        y++;
                    }
                }
                else if(position=='O')
                {
                    if(y-1<0)
                    {
                        continue;
                    }
                    else if(arena[x][y-1]=='#')
                    {
                        continue;
                    }
                    else if(arena[x][y-1]=='.')
                    {
                        y--;
                    }
                    else if(arena[x][y-1]=='*')
                    {
                        tcktNum++;
                        arena[x][y-1]='.';
                        y--;
                    }
                }

            }

        }
        arena.clear();
        cout<<tcktNum<<endl;

    }
    return 0;
}
