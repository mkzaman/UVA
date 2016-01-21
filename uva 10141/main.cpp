/*
 hoity , 24th may 2013
 adhoc
 uva 10141
 request for proposal
*/
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int number_of_prop;
    double number_of_rq,compliance,checker,price_temp,met_requirements_temp;
    vector<string>company;
    vector<double>price;
    vector<double>met_requirements;
    int temp=0,i,j,counter=1;
    string name,company_temp;

    while(cin>>number_of_rq>>number_of_prop)
    {
        if(number_of_rq==0.0||number_of_prop==0)
        {
            return 0;
        }
        if(temp==1)
        {
            cout<<endl;
        }
        temp=number_of_rq;
        getchar();
        while(temp--)
        {
            getline(cin,name);
            name.clear();
        }
        for(i=0;i<number_of_prop;i++)
        {
            getline(cin,company_temp);
            cin>>price_temp>>met_requirements_temp;
            company.push_back(company_temp);
            price.push_back(price_temp);
            met_requirements.push_back(met_requirements_temp);
            company_temp.clear();
            j=met_requirements[i];
            getchar();
            while(j--)
            {
                getline(cin,name);
                name.clear();
            }
            compliance=met_requirements[i]/number_of_rq;
            if(i==0)
            {
                checker=compliance;
                temp=i;
            }
            else if(checker==compliance)
            {
                if(price[i]<price[temp])
                {
                    checker=compliance;
                    temp=i;
                }
            }
            else if(compliance>checker)
            {
                checker=compliance;
                temp=i;
            }
        }
        cout<<"RFP #"<<counter<<endl;
        counter++;
        cout<<company[temp];
        temp=1;
        company.clear();
        price.clear();
        met_requirements.clear();
    }
    return 0;
}

