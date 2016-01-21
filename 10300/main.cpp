//id:10300
//name:Ecological premium
//site:uva
//date:14/1/2012

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    long long int cases,nof;
    double soy,animals,env,jayga,premium,total;
    while(cin>>cases)
    {
        while(cases--)
        {
            cin>>nof;
            total=0;
            while(nof--)
            {
                cin>>soy>>animals>>env;
                jayga=soy/animals;
                premium=(jayga*env)*animals;
                total=total+premium;
            }
            printf("%0.0lf\n",total);
        }
    }

return 0;
}
