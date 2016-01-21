/** verdict:
 *  author: zaman
 *  used algorithm:
 *  remarks:
 *  date: , time of acceptance:
 *  rank:  time:
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


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int row,column,x,y,i;
	char position;
	cin>>row>>column;
	row++;
	column++;
	int array[row][column];
	memset(array,0,sizeof(array[0][0])*row*column);

	while(cin>>x>>y>>position)
    {
        string commands;
        cin>>commands;
        for(i=0;i<(int)commands.size();i++)
        {
            char z=commands[i];
            if(commands[i]=='R')
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
            else if(commands[i]=='L')
            {
                if(position=='W')
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
                else if(position=='N')
                {
                    position='W';
                }
            }
            else if(commands[i]=='F')
            {
                if(position=='N')
                {
                    if(y==column-1)
                    {
                        if(array[x][y]==1)
                        {
                            continue;
                        }
                        else
                        {
                            array[x][y]=1;
                            cout<<x<<" "<<y<<" "<<position<<" LOST"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        y++;
                    }

                }
                if(position=='S')
                {
                    if(y==0)
                    {
                        if(array[x][y]==1)
                        {
                            continue;
                        }
                        else
                        {
                            array[x][y]=1;
                            cout<<x<<" "<<y<<" "<<position<<" LOST"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        y--;
                    }
                }
                if(position=='W')
                {
                    if(x==row-1)
                    {
                        if(array[x][y]==1)
                        {
                            continue;
                        }
                        else
                        {
                            array[x][y]=1;
                            cout<<x<<" "<<y<<" "<<position<<" LOST"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        x++;
                    }
                }
                if(position=='E')
                {
                    if(x==0)
                    {
                        if(array[x][y]==1)
                        {
                            continue;
                        }
                        else
                        {
                            array[x][y]=1;
                            cout<<x<<" "<<y<<" "<<position<<" LOST"<<endl;
                            break;
                        }
                    }
                    else
                    {
                        x--;
                    }
                }
            }
        }
        if(i==(int)commands.size())
        {
            cout<<x<<" "<<y<<" "<<position<<endl;
        }
        commands.clear();

    }



	return 0;
}
