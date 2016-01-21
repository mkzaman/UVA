/** verdict: ACCEPTED (WA WA WA WA)
 *  author: zaman
 *  used algorithm: floodfill
 *  remarks:
 *  date: February 7,2014, time of acceptance: 3:40 pm
 *  rank: 41 time: 0.066s
 *
 */

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

typedef vector<char>vc;
vector<vc>input;
int Row,Column;
typedef vector<int>vi;
vector<vi>result,space;
vi tempint;
int dr[]={1,1,0,-1,-1,-1,0,1};
int dc[]={0,1,1,1,0,-1,-1,-1};
int counter=0;

int floodfill(int r,int c,char ch1,int replace0)
{
    if(r<0||r>=Row||c<0||c>=Column)
    {
        return 0;
    }
    if(input[r][c]!=ch1)
    {
        return 0;
    }
    input[r][c]='%';
    result[r][c]=replace0;
    for(int d=0;d<8;d++)
    {
        floodfill(r+dr[d],c+dc[d],ch1,replace0);
    }
    return 0;
}


void initresult()
{
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            tempint.push_back(0);

        }
        result.push_back(tempint);
        space.push_back(tempint);
        tempint.clear();
    }

}

void calculate()
{
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(input[i][j]!='%')
            {
                counter++;
                char ch=input[i][j];
                floodfill(i,j,ch,counter);
            }
        }
    }

}
void printResult()
{

    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Column;j++)
        {
            if(j==0)
            {
                for(int k=0;k<space[i][j];k++)
                {
                    cout<<" ";
                }
                cout<<result[i][j];
            }
            else
            {
                cout<<" ";
                for(int k=0;k<space[i][j];k++)
                {
                    cout<<" ";
                }
                cout<<result[i][j];
            }

        }
        cout<<endl;
    }
    cout<<'%'<<endl;
}
void spaceCount()
{

    vi temp,lol;
    lol.assign(Column,0);
    int a,counter2,b;
    for(int i=0;i<Column;i++)
    {
        for(int j=0;j<Row;j++)
        {
            temp.push_back(result[j][i]);
        }
        a=*max_element(temp.begin(),temp.end());
        lol[i]=a;
        temp.clear();
    }
    for(int i=0;i<Column;i++)
    {
        counter2=0;
        a=lol[i];
        while(a)
        {
            a=a/10;
            if(a>0)
            {
                counter2++;
            }
        }
        lol[i]=counter2;
    }

    for(int i=0;i<Row;i++)
    {

        for(int j=0;j<Column;j++)
        {
            counter2=0;
            a=result[i][j];
            while(a)
            {
                a=a/10;
                if(a>0)
                {
                    counter2++;
                }
            }
            b=lol[j]-counter2;
            space[i][j]=b;
        }
    }
    lol.clear();
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	char in1,in2;
	vc tempVector;
    Row=Column=0;
	while(scanf("%c%c",&in1,&in2)!=EOF)
    {
        if(in1=='%' && in2=='\n')
        {
            initresult();
            calculate();
            spaceCount();
            printResult();
            input.clear();
            Row=Column=0;
            result.clear();
            counter=0;
            space.clear();
            in1='\0';
            in2='\0';
        }
        else if((in1>='A'&&in1<='z')&&in2=='\n')
        {
            tempVector.push_back(in1);
            Column=tempVector.size();
            input.push_back(tempVector);
            Row++;
            tempVector.clear();
            in1='\0';
            in2='\0';
        }
     //   else if((in1>='A'&&in1<='z')&&in2=='\0')
     //   {
     //       tempVector.push_back(in1);
     //       Column=tempVector.size();
      //      input.push_back(tempVector);
      //      Row++;
      //      tempVector.clear();
       //     initresult();
      //      calculate();
       //     spaceCount();
       //     printResult();
       //     input.clear();
        //    Row=Column=0;
       //     result.clear();
       //     counter=0;
       //     space.clear();
       //     in1='\0';
       //     in2='\0';

       // }
        else
        {
            tempVector.push_back(in1);
            in1='\0';
            in2='\0';
        }

    }
    //tempVector.push_back(in1);
  //  Column=tempVector.size();
  //  input.push_back(tempVector);
  //  Row++;
  // tempVector.clear();
   initresult();
    calculate();
    spaceCount();
    printResult();
    input.clear();
    Row=Column=0;
    result.clear();
    counter=0;
    space.clear();

	return 0;
}
