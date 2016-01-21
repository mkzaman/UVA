//accepted
//uva - 489
//name : the hangman problem
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    string given_word,app_word;
    int array[26],number_of_round,i,temp,counter_given_word;
    int false_counter;
    while(cin>>number_of_round)
    {
        if(number_of_round<0)
        {
            return 0;
        }
        cout<<"Round "<<number_of_round<<endl;
        memset(array,0,sizeof(array));
        counter_given_word=false_counter=0;
        cin>>given_word;
        cin>>app_word;
        for(i=0;i<given_word.size();i++)
        {
            temp=given_word[i]-'a';
             if(array[temp]==0)
             {
                 array[temp]=1;
                 counter_given_word++;
             }
        }
        for(i=0;i<app_word.size();i++)
        {
            temp=app_word[i]-'a';
            if(array[temp]==1)
            {
                array[temp]=0;
                counter_given_word--;
                if(counter_given_word==0)
                {
                    cout<<"You win."<<endl;
                    break;
                }
            }
            else
            {
                false_counter++;
                if(false_counter>=7)
                {
                    cout<<"You lose."<<endl;
                    break;
                }
            }
        }
        if(false_counter<7&&counter_given_word!=0)
        {
            cout<<"You chickened out."<<endl;
        }
    }
    return 0;
}
