/** verdict: AC 
*  author: zaman
*  used algorithm: brute force
*  remarks: Tough brute force problem, though Interesting
	    I have used the Idea of seven segments circuit here
	     _	
	    |_|
	    |_| this is seven segment circuit
	    for this problem
	    the left upper bar - a
	    the left lower bar - b
	    the right upper bar - c
	    the right lowe bar -d
	    the bars from top to bottom e,f,g

*  date: 15th November,2015 , time of acceptance: 12:25AM
*  rank:57  time: 0.009s
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
#define ColSize 120
#define RowSize 24
using namespace std;


char outputWindow[RowSize][ColSize];
int row, column;

void PrintHorizontal(int sizeOfChar, int rowStart, int columnStart)
{
	for (int i = 1; i <= sizeOfChar; i++)
	{
		outputWindow[rowStart][columnStart + i] = '-';
	}
}
void PrintVertical(int sizeOfChar, int rowStart, int columnStart)
{
	for (int i = 1; i <= sizeOfChar; i++)
	{
		outputWindow[rowStart + i][columnStart] = '|';
	}
}


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int sizeOfChar;
	string digits;
	map<char, string>sevensegmapper;
	sevensegmapper['1'] = "cd";
	sevensegmapper['2'] = "bcefg";
	sevensegmapper['3'] = "cdefg";
	sevensegmapper['4'] = "acdf";
	sevensegmapper['5'] = "adefg";
	sevensegmapper['6'] = "abdefg";
	sevensegmapper['7'] = "ecd";
	sevensegmapper['8'] = "abcdefg";
	sevensegmapper['9'] = "acdefg";
	sevensegmapper['0'] = "abcdeg";
	while (cin >> sizeOfChar >> digits)
	{
		if (sizeOfChar == 0)
		{
			if (digits[0] == '0')
			{
				return 0;
			}
		}

		memset(outputWindow, ' ', sizeof(outputWindow[0][0]) * RowSize * ColSize);
		//   int rowForEachDigits = sizeOfChar+2;
		//  int colForEachDigits = 2*sizeOfChar + 3;
		row = 0;
		column = 0;

		for (int i = 0; i<digits.size(); i++)
		{
			char toPrint = digits[i];
			string segments = sevensegmapper[toPrint];

			for (int j = 0; j< segments.size(); j++)
			{
				switch (segments[j])
				{
				case 'a':
					PrintVertical(sizeOfChar, 0, column);
					break;
				case 'b':
					PrintVertical(sizeOfChar, 1 + sizeOfChar, column);
					break;
				case 'c':
					PrintVertical(sizeOfChar, 0, 1 + sizeOfChar+column);
					break;
				case 'd':
					PrintVertical(sizeOfChar, 1 + sizeOfChar, 1 + sizeOfChar + column);
					break;
				case 'e':
					PrintHorizontal(sizeOfChar, 0, column);
					break;
				case 'f':
					PrintHorizontal(sizeOfChar, 1 + sizeOfChar, column);
					break;
				case 'g':
					PrintHorizontal(sizeOfChar, 2 + 2 * sizeOfChar, column);
					break;

				}
			}
			column += sizeOfChar + 3;
		}
		int rowPrint = 2 * sizeOfChar + 3;
		int columnPrint = (((sizeOfChar + 2)*digits.size()) + digits.size());
		for (int i = 0; i<rowPrint; i++)
		{
			for (int j = 0; j<columnPrint-1; j++)
			{
				printf("%c", outputWindow[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
