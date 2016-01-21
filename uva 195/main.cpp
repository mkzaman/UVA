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

	int cases;
	vector<string>input;
	string temp;
	while(cin>>cases)
    {
        getchar();
        while(cases--)
        {
            getline(cin,temp);
            input.push_back(temp);
        }
        for(int i=0;i<(int)input.size();i++)
        {
            sort(input[i].begin(),input[i].end());
            do{
                cout<<input[i]<<endl;
            }while(next_permutation(input[i].begin(),input[i].end()));
        }
        input.clear();
    }

	return 0;
}
