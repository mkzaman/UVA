//shuvo
//13/8/2011
//name:kindergarten counting game
//id:486

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,j,b;
    char a[1000];
    while(gets(a))
    {
	j=strlen(a);
	if(j==0)
	{
	    exit(1);
	}
	for(i=0,b=0;i<j;i++)
	{


                if((a[i]>=65&&a[i]<=92)||(a[i]>=97&&a[i]<=122))
                {
                    if((a[i+1]>=-127&&a[i+1]<65)||(a[i+1]>92&&a[i+1]<97)||(a[i+1]>122)||(a[i+1]==NULL))
                    {
                        b++;
                    }
                }



        }
printf("%d\n",b);
    }
return 0;
}
