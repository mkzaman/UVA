#include<stdio.h>


int main()
{
    int  a[50],t,n,i,j,q,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(i=0,q=0;i<n;i++)
        {
            for(s=i+1;s<n;s++)
            {


            if(a[i]>a[s])
            {
                j=a[i];
                a[i]=a[s];
                a[s]=j;
                q++;
            }
            }
        }
        printf("Optimal train swapping takes %d swaps\n",q);
    }
return 0;
}
