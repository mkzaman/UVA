//id:344
//name:roman digititis
//date:24/1/2012
//site:uva


#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int given,temp,temp1,i,v,x,l,c,count,temp2;
    while(cin>>given)
    {

        i=v=x=l=c=0;
        if(given==0)
        {
            break;
        }
        for(temp2=1;temp2<=given;temp2++)
        {
            temp=temp2;

            if(temp==100)
            {
                c+=1;
            }

            else
            {
                count=1;
                while(temp!=0)
                {
                    temp1=temp%10;
                    temp=temp/10;
                    if(count==1)
                    {
                        if(temp1>0&&temp1<4)
                        {
                            i=temp1+i;
                        }
                        else if(temp1==4||temp1==6)
                        {
                            v+=1;
                            i+=1;
                        }
                        else if(temp1==5)
                        {
                            v+=1;
                        }
                        else if(temp1==7)
                        {
                            v+=1;
                            i+=2;
                        }
                        else if(temp1==8)
                        {
                            v+=1;
                            i+=3;
                        }
                        else if(temp1==9)
                        {
                            x+=1;
                            i+=1;
                        }

                    }
                    else
                    {
                        if(temp1>0&&temp1<4)
                        {
                            x+=temp1;
                        }
                        else if(temp1==4||temp1==6)
                        {
                            x+=1;
                            l+=1;
                        }
                        else if(temp1==5)
                        {
                            l+=1;
                        }
                        else if(temp1==7)
                        {
                            l+=1;
                            x+=2;
                        }
                        else if(temp1==8)
                        {
                            l+=1;
                            x+=3;
                        }
                        else if(temp1==9)
                        {
                            c+=1;
                            x+=1;
                        }
                    }
                    count++;
                }
            }

        }
        cout<<given<<": "<<i<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;

    }

return 0;
}
