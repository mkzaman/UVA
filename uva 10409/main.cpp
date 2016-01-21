//accepted
//uva 10409
//name:die game

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int north,south,east,west,top,back;
int north_new,south_new,east_new,west_new,top_new,back_new;

void north_function()
{
    north_new=top;
    east_new=east;
    west_new=west;
    top_new=south;
    south_new=back;
    back_new=north;
}
void south_function()
{
    north_new=back;
    east_new=east;
    west_new=west;
    top_new=north;
    south_new=top;
    back_new=south;

}
void east_function()
{
    north_new=north;
    west_new=back;
    south_new=south;
    east_new=top;
    top_new=west;
    back_new=east;
}
void west_function()
{
    north_new=north;
    east_new=back;
    west_new=top;
    south_new=south;
    top_new=east;
    back_new=west;
}

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int number_of_command;
    string command;
    while(cin>>number_of_command)
    {
        if(number_of_command==0)
        {
            return 0;
        }
        north=2;
        west=3;
        top=1;
        east=4;
        south=5;
        back=6;
        while(number_of_command--)
        {
            cin>>command;
            if(command=="north")
            {
                north_function();
            }
            else if(command=="south")
            {
                south_function();
            }
            else if(command=="east")
            {
                east_function();
            }
            else
            {
                west_function();
            }
            south=south_new;
            north=north_new;
            east=east_new;
            west=west_new;
            back=back_new;
            top=top_new;
        }
        cout<<top<<endl;
    }

    return 0;
}
