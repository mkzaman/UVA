/** verdict: ACCEPTED
 *  author: zaman
 *  used algorithm: implicit graph traversal
 *  remarks: trivial
 *  date: January 3, 2014, time of acceptance: 11:09 PM
 *  rank: 1969 time: 0.016s
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
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	typedef vector<char>vc;
	typedef vector<int>vi;

	vector<vc>maze;

	int column,row,start;
	while(cin>>row>>column>>start)
    {
        getchar();
        int tester[row][column];
        memset(tester, 0 , sizeof(tester[0][0])*row*column);
        if(!column&&!row&&!start)
        {
            return 0;
        }
        vc vecrow;
        string input;
        for(int i=0;i<row;i++)
        {
            getline(cin,input);
            for(int j=0;j<(int)input.size();j++)
            {
                vecrow.push_back(input[j]);
            }
            maze.push_back(vecrow);
            vecrow.clear();
        }


        start--;
        int x=0,counter,y;
        y=start;
        maze[x][y];
        counter=0;
        while(1)
        {
            if(x<0||x>row-1||y<0||y>column-1)
            {
                cout<<counter<<" step(s) to exit"<<endl;
                break;
            }
            else if(maze[x][y]=='S')
            {
                if(tester[x][y]==0)
                {
                    counter++;
                    tester[x][y]=counter;
                    x++;
                }
                else
                {
                    cout<<tester[x][y]-1<<" step(s) before a loop of "<< counter-tester[x][y]+1<<" step(s)"<<endl;
                    break;
                }

            }
            else if(maze[x][y]=='N')
            {
                if(tester[x][y]==0)
                {
                    counter++;
                    tester[x][y]=counter;
                    x--;
                }
                else
                {
                    cout<<tester[x][y]-1<<" step(s) before a loop of "<< counter-tester[x][y]+1<<" step(s)"<<endl;
                    break;
                }

            }
            else if(maze[x][y]=='E')
            {
                if(tester[x][y]==0)
                {
                    counter++;
                    tester[x][y]=counter;
                    y++;
                }
                else
                {
                    cout<<tester[x][y]-1<<" step(s) before a loop of "<< counter-tester[x][y]+1<<" step(s)"<<endl;
                    break;
                }

            }
            else if(maze[x][y]=='W')
            {
                if(tester[x][y]==0)
                {
                    counter++;
                    tester[x][y]=counter;
                    y--;
                }
                else
                {
                    cout<<tester[x][y]-1<<" step(s) before a loop of "<< counter-tester[x][y]+1<<" step(s)"<<endl;
                    break;
                }

            }
        }

        maze.clear();
    }



	return 0;
}
