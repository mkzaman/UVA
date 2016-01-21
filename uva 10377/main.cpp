/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: implicit graph, brute force
 *  remarks: none
 *  date: January 5th, 2014 , time of acceptance: 1:26 AM
 *  rank: 1327  time: 0.019s
 *
 */

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

typedef vector<char>vc;

vector<vc>maze;

int main()
{
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int numOfMaze,row,column;

	cin>>numOfMaze;
	getchar();
	//getchar();
	while(numOfMaze--)
    {
        cin>>row>>column;
        getchar();
        vc temprow;
        string input;
        for(int i=0;i<row;i++)
        {
            getline(cin,input);
            for(int j=0;j<(int) input.size();j++)
            {
                temprow.push_back(input[j]);
            }
            maze.push_back(temprow);
            temprow.clear();
        }
        int x,y;
        char position='N';
        cin>>x>>y;
        getchar();
        string command,temp;
        while(getline(cin,temp)&&temp.size())
        {
           // for(int i=0;i<(int)temp.size();i++)
           // {
            //    command.push_back(temp[i]);
           // }
           command = command+temp;
        }

        x--;
        y--;
        for(int i=0;i<(int) command.size() ; i++)
        {
            if(command[i]=='R')
            {
                if(position=='N')
                {
                    position='E';
                }
                else if(position=='E')
                {
                    position='S';
                }
                else if(position=='S')
                {
                    position='W';
                }
                else if(position=='W')
                {
                    position='N';
                }
            }
            else if(command[i]=='L')
            {
                if(position=='N')
                {
                    position='W';
                }
                else if(position=='W')
                {
                    position='S';
                }
                else if(position=='S')
                {
                    position='E';
                }
                else if(position=='E')
                {
                    position='N';
                }
            }
            else if(command[i]=='F')
            {
                if(position=='N')
                {
                    if(maze[x-1][y]=='*')
                    {
                        continue;
                    }
                    else
                    {
                        x--;
                    }
                }
                if(position=='E')
                {
                    if(maze[x][y+1]=='*')
                    {
                        continue;
                    }
                    else
                    {
                        y++;
                    }
                }
                if(position=='S')
                {
                    if(maze[x+1][y]=='*')
                    {
                        continue;
                    }
                    else
                    {
                        x++;
                    }
                }
                if(position=='W')
                {
                    if(maze[x][y-1]=='*')
                    {
                        continue;
                    }
                    else
                    {
                        y--;
                    }
                }

            }
            else if(command[i]=='Q')
            {
                cout<<++x<<" "<<++y<<" "<<position<<endl;
            }

        }
        if(numOfMaze>0)
        {
            cout<<endl;
        }
        command.clear();
        maze.clear();
    }

	return 0;
}
