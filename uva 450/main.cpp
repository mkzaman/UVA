#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <cctype>
#include <cstring>
#include <typeinfo>
#include <exception>
#include <stdexcept>
#include <memory>
#include <fstream>
#include <string>
#include <sstream>
#include <functional>
#include <iterator>
#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <locale>
#include <limits>
#include <utility>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int num_of_dept,comma,i,k;
    string name_of_dept,temporary;
    char str[5000];
    vector<string>title,firstname,lastname,homeaddress;
    vector<string>department,homephone,workphone,campusbox,ajib;
    while(cin>>num_of_dept)
    {
        getchar();
        while(num_of_dept--)
        {
            getline(cin,name_of_dept);
            getchar();
            comma=0;
            while(gets(str)&&strlen(str))
            {
                department.push_back(name_of_dept);
                for(i=0;i<strlen(str);i++)
                {
                    if(str[i]==',')
                    {
                        if(comma==0)
                        {
                            title.push_back(temporary);
                        }
                        else if(comma==1)
                        {
                            firstname.push_back(temporary);
                        }
                        else if(comma==2)
                        {
                            lastname.push_back(temporary);
                        }
                        else if(comma==3)
                        {
                            homeaddress.push_back(temporary);
                        }
                        else if(comma==4)
                        {
                            homephone.push_back(temporary);
                        }
                        else if(comma==5)
                        {
                            workphone.push_back(temporary);
                        }
                        else if(comma==6)
                        {
                            campusbox.push_back(temporary);
                        }
                        temporary.clear();
                        comma++;
                        continue;
                    }
                    temporary.push_back(str[i]);

                }
            }
            getchar();
        }
        ajib=lastname;
        sort(ajib.begin(),ajib.end());
        for(i=0;i<ajib.size();i++)
        {
            for(k=0;k<lastname.size();k++)
            {
                if(ajib[i]==lastname[i])
                {
                    printf("----------------------------------------\n");
                    cout<<title[k]<<" "<<firstname[k]<<" "<<lastname[k]<<endl;
                    cout<<homeaddress[k]<<endl;
                    cout<<"Department: "<<department[k]<<endl;
                    cout<<"Home Phone: "<<homephone[k]<<endl;
                    cout<<"Work Phone: "<<workphone[k]<<endl;
                    cout<<"Campus Box: "<<campusbox[k]<<endl;
                }
            }
        }
        title.clear();
        firstname.clear();
        lastname.clear();
        homeaddress.clear();
        department.clear();
        homephone.clear();
        workphone.clear();
        campusbox.clear();
        ajib.clear();
    }
	return 0;
}
