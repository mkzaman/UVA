/** verdict: WA RE AC
 *  author: zaman
 *  used algorithm: adhoc
 *  remarks:
 *  date: March 13, 2016, time of acceptance: 12:16 AM
 *  rank: 879 time: 0.000
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

	int numOfElements, tempNum;
	vector<int>number;
	vector<bool>diffBetweenNumbers;
	while(cin>>numOfElements)
    {
        for(int i=0; i<numOfElements; i++)
        {
            scanf("%d",&tempNum);
            number.push_back(tempNum);
        }
        diffBetweenNumbers.assign(numOfElements-1,false);
        for(int i = 1; i < numOfElements; i++)
        {
            tempNum = abs(number[i]-number[i-1]);
            if(tempNum < numOfElements && tempNum > 0)
            {
                diffBetweenNumbers[tempNum - 1] = true;
            }
        }
        if(find(diffBetweenNumbers.begin(), diffBetweenNumbers.end(), false) != diffBetweenNumbers.end())
        {
            printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }

        number.clear();
        diffBetweenNumbers.clear();

    }
	return 0;
}
