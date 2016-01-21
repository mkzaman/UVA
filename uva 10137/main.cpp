#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

double round(double f)
{
    return floor((f*100)+0.5)/100.0;
}
double roundavg(vector<double>participates_money)
{
    double sum=0.0;
    for(int i=0; i<participates_money.size();i++)
    {
        sum += participates_money[i];
    }
    return round(sum/participates_money.size());
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int participates;
    double temp,avg,belowavg,aboveavg;
    vector<double>participates_money;
    while(cin>>participates)
    {
        if(!participates)
        {
            return 0;
        }
        for(int i =0; i < participates ; i++)
        {
            scanf("%lf",&temp);
            participates_money.push_back(temp);
        }
        avg = roundavg(participates_money);
        belowavg = 0.0;
        aboveavg = 0.0;
        for(int i=0; i< participates;i++)
        {
            if(participates_money[i]>avg)
            {
                aboveavg += participates_money[i]-avg;
            }
            else
            {
                belowavg += avg - participates_money[i];
            }
        }
        printf("$");
        (aboveavg<belowavg)?printf("%0.2lf\n",aboveavg):printf("%0.2lf\n",belowavg);
        participates_money.clear();
    }
    return 0;
}
