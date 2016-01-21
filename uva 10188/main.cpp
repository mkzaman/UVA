/*
shuvo, 25th may 2013
uva 10188
automated judge script
adhoc
*/

/*
    একটা ব্যাপার লক্ষ রাখতে হবে যে , এখানে যদি উত্তর মিলেও যায় , আউটপুট আর সলিউশন এর লাইন নাম্বার যেন
    একই থাকে , এক না থাকলে PE দিতে হবে নাহলে ঠিক আছে ।
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int line_output,line_solution,counter=1,a,b;
    string solution,output,temp,output_numeric,solution_numeric;
    while(cin>>line_output)
    {
        if(!line_output)
        {
            return 0;
        }
        getchar();
        a=line_output;
        while(line_output--)
        {
            getline(cin,temp);
            output +=temp;
            temp.clear();
        }
        cin>>line_solution;
        getchar();
        b=line_solution;
        while(line_solution--)
        {
            getline(cin,temp);
            solution +=temp;
            temp.clear();
        }
        if(output==solution)
        {
            if(a==b)
            {
                cout<<"Run #"<<counter<<": "<<"Accepted"<<endl;
            }
            else
            {
                 cout<<"Run #"<<counter<<": Presentation Error"<<endl;
            }
        }
        else
        {
            for(int i=0;i<output.size();i++)
            {
                if(output[i]>='0'&&output[i]<='9')
                {
                    output_numeric.push_back(output[i]);
                }
            }
            for(int i=0;i<solution.size();i++)
            {
                if(solution[i]>='0'&&solution[i]<='9')
                {
                    solution_numeric.push_back(solution[i]);
                }
            }
            if(output_numeric==solution_numeric)
            {
                cout<<"Run #"<<counter<<": Presentation Error"<<endl;
            }
            else
            {
                cout<<"Run #"<<counter<<": Wrong Answer"<<endl;
            }
        }
        output.clear();
        solution.clear();
        output_numeric.clear();
        solution_numeric.clear();
        counter++;
    }
    return 0;
}
