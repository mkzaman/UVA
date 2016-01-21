#include <iostream>
#include <vector>
#include <set>
//#include <multiset>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
  //  freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    set<int>cd;
    int jack,jill,temp;
    int counter;
    while(cin>>jack>>jill)
    {
        counter=0;
        if(!jack&&!jill)
        {
            return 0;
        }

        while(jack--)
        {
            //int temp;
            cin>>temp;
            cd.insert(temp);
        }
        while(jill--)
        {
            cin>>temp;
            if(cd.count(temp)!=0)
            {
                counter++;
            }

        }
        cout<<counter<<endl;
        cd.clear();

    }
    return 0;
}
