#include<stdio.h>
#include<string.h>
int main()
{
    //freopen("input.txt","r",stdin);
    char a;
    int n=0;
    while(scanf("%c",&a)==1)
    {
         int i,j,k,l,m;
         if(a=='"')
         {
             n++;
             if(n%2==1)
             {
                 printf("``");
             }
             else
             {
                 printf("''");
             }
         }
         else
         {
             printf("%c",a);
         }

    }
    return 0;
}
