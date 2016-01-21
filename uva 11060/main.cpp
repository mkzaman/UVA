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
typedef vector<int>vi;
vector<vi>AdjList;
map<string,int>lists;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int beverages;
	string temp;
	int array[200][200];
	while(cin>>beverages)
    {
        getchar();
        memset(array, 0, sizeof(array[0][0]) * 200 * 200);
        for(int i=0;i<beverages;i++)
        {
            getline(cin,temp);
            lists[temp]=i;
        }
        int conditions;
        cin>>conditions;
        getchar();
        while(conditions--)
        {
            getline(cin,temp);
            stringstream ss(temp);
            string a,b;
            while(temp>>a>>b)
            {
                array[lists[a]][lists[b]]=1;
            }
        }



    }


	return 0;
}
