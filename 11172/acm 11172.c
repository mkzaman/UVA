#include<stdio.h>


int main()
{
    unsigned long int t,a,b,i;
    scanf("%lu",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lu %lu",&a,&b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
return 0;
}
