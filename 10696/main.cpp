//name:f91
//id:10696
//date:13/1/2012
//site:uva

#include <iostream>

using namespace std;

int main()
{
    unsigned long long int given;
    while(cin>>given)
    {
        if(given==0)
        {
            break;
        }
        if(given>=101)
        {
            cout<<"f91("<<given<<") = "<<given-10<<endl;
        }
        else
        {
            cout<<"f91("<<given<<") = "<<"91"<<endl;
        }
    }

return 0;
}
