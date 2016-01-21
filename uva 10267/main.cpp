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
#define ColSize 260
#define RowSize 260
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output1.txt","w",stdout);

	char editor[RowSize][ColSize];
	char command,color;
	int row,column;
	memset(editor,'0',sizeof(editor[0][0]*RowSize*ColSize));
	char C;
	int X1,X2,Y1,Y2;
	string name;
	while(cin>>command)
    {

        switch(command)
        {
        case 'I':
            cin>>column>>row;
            for(int i=0; i<row; i++)
            {
                for(int j=0;j<column;j++)
                {
                    editor[i][j]='0';
                }
            }
            for(int i=0; i<row; i++)
            {
                for(int j=0;j<column;j++)
                {
                    cout<<editor[i][j];
                }
                cout<<endl;
            }
            break;
        case 'C':
            memset(editor,'0',sizeof(editor[0][0]*RowSize*ColSize));
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'L':
            cin>>Y1>>X1>>C;
            editor[X1-1][Y1-1]=C;
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'V':
            cin>>X1>>Y1>>Y2>>C;
            for(int i = Y1-1; i<Y2-1;i++)
            {
                editor[X1][i] = C;
            }
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'H':
            cin>>X1>>X2>>Y1>>C;
            for(int i=X1-1; i<X2-1;i++)
            {
                editor[i][Y1] = C;
            }
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'K':
            cin>>X1>>X2>>Y1>>Y2>>C;
            for(int i=X1-1; i<X2-1;i++)
            {
                for(int j=Y1-1; j<Y2-1;j++)
                {
                    editor[i][j] = C;
                }
            }
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'F':
            cin>>X1>>Y1>>C;
            color = editor[X1-1][Y1-1];
            for(int i=0;i<row;i++)
            {
                for(int j=0; j<column; j++)
                {
                    if(editor[i][j] == color)
                    {
                        editor[i][j] = C;
                        editor[i][j-1]=C;
                        editor[i][j+1]=C;
                        editor[i+1][j]=C;
                        editor[i-1][j]=C;
                    }
                }
            }
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
            break;
        case 'S':
            cin>>name;
            cout<<name<<endl;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }
                        for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    printf("%c",editor[i][j]);
                }
                printf("\n");
            }

            break;
        case 'X':
            return 0;
        }
    }

	return 0;
}
