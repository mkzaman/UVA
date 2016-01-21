/*
    date:18/5/13
    algo:adhoc
    accepted
*/


#include <iostream>

using namespace std;
int count_set_bits(int N)
{
    int result;
    while(N)
    {
        result++;
        N &=N-1;
    }
    return result;
}
int hexadecimal(int given)
{
    int result=0,temp,counter;
    while(given)
    {
        temp=given%10;
        given=given/10;
        while(temp)
        {
            counter=temp%2;
            temp/=2;
            if(counter==1)
            {
                result++;
            }
        }
    }
    return result;
}
int main()
{
    long long int given,count_decimal,count_hexadecimal,cases;
    cin>>cases;
    while(cases--)
    {
        cin>>given;
        count_decimal=count_set_bits(given);
        count_hexadecimal=hexadecimal(given);
        cout<<count_decimal<<" "<<count_hexadecimal<<endl;
    }
    return 0;
}
