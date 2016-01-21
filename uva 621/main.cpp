#include <iostream>

using namespace std;

int main()
{
    long long int n;
    int checker;
    cin>>n;

        while(n--)
        {
            cin>>checker;
            if(checker==1||checker==4||checker==78)
            {
                cout<<"+";
            }
            else if(checker==135||checker==435||checker==7835)
            {
                cout<<"-";
            }
            else if(checker==914||checker==944||checker==9784)
            {
                cout<<"*";
            }
            else
            {
                cout<<"?";
            }
            cout<<endl;
        }

    return 0;
}
