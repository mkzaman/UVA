//accepted
//adhoc

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double c_init,f_init,f_increase,c_final;
    int cases,i;
    while(cin>>cases)
    {
        for(i=1;i<=cases;i++)
        {
            cin>>c_init>>f_increase;
            f_init=(9.0*c_init)/5.0+32.0;
            f_init=f_init+f_increase;
            c_final=(5.0*f_init-160.0)/9.0;
            printf("Case %d: %0.2f\n",i,c_final);
        }
    }
    return 0;
}
