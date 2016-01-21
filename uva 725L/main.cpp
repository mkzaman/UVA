/** verdict: TLE, ACCEPTED
 *  author: zaman
 *  used algorithm: Complete search paradigm
 *  remarks: boring
 *  date: 13/6/2014 , time of acceptance: 2:42 AM
 *  rank: 1462  time: 0.519s
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
	int given;
	int count=0;
	while(scanf("%d",&given))
    {
        set<int>check;
        map<int,int>result;
        if(!given)
        {
            return 0;
        }
        if(count>0)
        {
            printf("\n");
        }
        int x = 1234;
        int y,a,b,c;
        while(x<98766)
        {
            y = x*given;
            if(y>98765)
            {
               x++;
               continue;
            }
            a=y;
            b=x;
            if(a<10000||b<10000)
            {
                check.insert(0);
            }
            while(a)
            {
                check.insert(a%10);
                a/=10;
            }
            while(b)
            {
                check.insert(b%10);
                b/=10;
            }
            if(check.size()==10)
            {
                result[y] = x;
            }
            check.clear();
            x++;
        }
        if(result.size()==0)
        {
            printf("There are no solutions for %d.\n",given);
        }
        else
        {
            for(map<int,int>::iterator it=result.begin();it!=result.end();it++)
            {
                if(it->first<10000)
                {
                    printf("0");
                }
                cout<<it->first<<" / ";
                if(it->second<10000)
                {
                    cout<<"0";
                }
                cout<<it->second<<" = "<<given<<endl;
            }
        }
        result.clear();
        count++;
    }

	return 0;
}
