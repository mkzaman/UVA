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
	//freopen("output.txt","w",stdout);

	char chessBoard[8][8];
	memset(chessBoard, '0', sizeof(chessBoard[0][0]) * 8 * 8);
	char check;

	/**

	for(int i=0 ;i < 8 ;i++)
    {
        for(int j=0; j<8 ; j++)
        {
            printf("%c",chessBoard[i][j]);
        }
        printf("\n");
    }
    **/
    while(1)
    {
        int counter = 0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                scanf("%c",&chessBoard[i][j]);
                if(chessBoard[i][j] == '.')
                {
                    counter++;
                }
                if(counter == 64)
                {
                    return 0;
                }
            }
            getchar();
        }
        char currentData;
        for(int i=0; i<8 ;i++)
        {
            for(int j=0;j<8;j++)
            {
                currentData = chessBoard[i][j];
                if(currentData != '.')
                {
                    if(currentData == 'p' || currentData == 'P')
                    {

                    }
                    else if(currentData == 'n' || currentData == 'N')
                    {

                    }
                    else if(currentData == 'b' || currentData == 'B')
                    {

                    }
                    else if(currentData == 'r' || currentData == 'R')
                    {

                    }
                    else if(currentData == 'q' || currentData == 'Q')
                    {

                    }
                    else if(currentData == 'k' || currentData == 'K')
                    {

                    }

                }
            }
        }



    }
	return 0;
}






















