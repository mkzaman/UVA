/** verdict: WA AC
 *  author: zaman
 *  used algorithm: complete search
 *  remarks: First time wrong answer for temp was too small, change the value and get ac
 *  date: 27/8/2014 , time of acceptance: 7:56 pm
 *  rank: 837 time: 0.072s
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

	int n,m,temp;
    vector<int>init,query,pairs;
    int cases=1;
	while(cin>>n)
    {
        if(!n)
        {
            return 0;
        }

        for(int i=0;i<n;i++)
        {
            cin>>temp;
            init.push_back(temp);
        }
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>temp;
            query.push_back(temp);
        }

        sort(init.begin(),init.end());
        for(int i=0;i<(int)init.size()-1;i++)
        {
            for(int j=i+1;j<(int)init.size();j++)
            {
                pairs.push_back(init[i]+init[j]);
            }
        }
//       // cout<<pairs.size()<<endl;
//       for(int i=0;i<pairs.size();i++)
//       {
//           cout<<pairs[i]<<" ";
//       }
//       cout<<endl;

        int result;
       // cout<<temp;
       cout<<"Case "<<cases<<":"<<endl;
        for(int i=0;i<(int)query.size();i++)
        {
            temp=10000000;
            for(int j=0;j<(int)pairs.size();j++)
            {
                if(abs(query[i]-pairs[j])<temp)
                {
                    temp = abs(query[i]-pairs[j]);
                    result=pairs[j];
                }
            }
            cout<<"Closest sum to "<<query[i]<<" is "<<result<<"."<<endl;
        }
        init.clear();
        pairs.clear();
        query.clear();
        cases++;
    }

	return 0;
}
