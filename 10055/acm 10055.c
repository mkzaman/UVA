//shuvo 6/8/2011
//hashmat the brave warrior
//id:10055

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a,b,c;      //b>a
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        if(a>=b)
        {
            c=a-b;
        }
        else
        c=b-a;
        printf("%.0lf\n",c);
    }

return 0;
}
//succesful 6/8/2011
