//id:11936
//name: The Lazy Lumberjacks
//date: 3/2/2012
//site: uva

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
    long long int t[3],cases;
    cin>>cases;
    while(cases--)
    {
        cin>>t[0]>>t[1]>>t[2];
        sort(t,t+3);
        if(t[0]+t[1]>t[2])
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Wrong!!"<<endl;
        }
    }

return 0;
}
