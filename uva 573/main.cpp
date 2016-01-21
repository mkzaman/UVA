/*
accepted
algo:adhoc
date:18/5/2013

*/


#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    double height_of_wall,can_climb,slides_night,fatigue_factor;
    double uitha_geche;
    long long int day;
    while(cin>>height_of_wall>>can_climb>>slides_night>>fatigue_factor)
    {
        if(height_of_wall==0)
        {
            return 0;
        }
        day=0;
        fatigue_factor=can_climb*(fatigue_factor/100.0);
        uitha_geche=0.0;
        while(uitha_geche<height_of_wall)
        {
            day++;
            uitha_geche +=can_climb;
            if(uitha_geche>height_of_wall||(uitha_geche-=slides_night)<0.0)
            {
                break;
            }
            can_climb -=fatigue_factor;
            if(can_climb<0.0)
            {
                can_climb=0.0;
            }

        }
        if(uitha_geche<=0.0)
        {
            cout<<"failure on day "<<day<<endl;
        }
        else
        {
            cout<<"success on day "<<day<<endl;
        }
    }
    return 0;
}
