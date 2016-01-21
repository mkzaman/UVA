//id no:637
//name : booklet printing
//date :23/6/2012
//site:uva


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
    long long int number_of_pages,needed_pages,max,min,i;
    while(cin>>number_of_pages)
    {
        if(number_of_pages==0)
        {
            return 0;
        }
        cout<<"Printing order for "<<number_of_pages<<" pages:"<<endl;
        needed_pages=(int)ceil(number_of_pages/4.0);

        max=needed_pages*4;
        min=1;
        for(i=1;i<=needed_pages;i++)
        {
            cout<<"Sheet "<<i<<", front: ";
            if(max<=number_of_pages)
            {
                cout<<max<<", ";
            }
            else
            {
                cout<<"Blank, ";
            }
            max--;
            cout<<min<<endl;
            min++;
            if(max>number_of_pages&&min>number_of_pages)
            {
                continue;
            }
            cout<<"Sheet "<<i<<", back : ";
            cout<<min<<", ";
            min++;

            if(max<=number_of_pages)
            {
                cout<<max<<endl;
            }
            else
            {
                cout<<"Blank"<<endl;
            }
            max--;


        }
    }
    return 0;
}
