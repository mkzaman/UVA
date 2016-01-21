//shuvo
//12/9/2011
//id: 102
//name:ecological bin packing

#include<stdio.h>

int main()
{
    unsigned long int b[3],g[3],c[3],smallest,temp;
    int i;
    char first,second,third;
    while(scanf("%lu %lu %lu %lu %lu %lu %lu %lu %lu",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
    {

        //ekhon brown k prothome rekhe ..... bgc then bcg
        smallest=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];  //bcg
        first='B';
        second='C';
        third='G';
        temp=b[1]+b[2]+g[0]+g[2]+c[0]+c[1];    //bgc
        if(temp<smallest)
        {
            smallest=temp;
            first='B';
            second='G';
            third='C';

        }
        // ekhon g k shmne rekhe gbc then gcb
        temp=g[1]+g[2]+b[0]+b[2]+c[0]+c[1];   //gbc

        if(temp<smallest)
        {
            smallest=temp;
            first='G';
            second='B';
            third='C';
        }
        temp=g[1]+g[2]+c[0]+c[2]+b[0]+b[1];   //gcb

        if(temp<smallest)
        {
            smallest=temp;
            first='G';
            second='C';
            third='B';
        }
        //ekhon c k shamne rekhe cbg then cgb
        temp=c[1]+c[2]+b[0]+b[2]+g[0]+g[1];  //cbg

        if(temp<smallest)
        {
            smallest=temp;
            first='C';
            second='B';
            third='G';
        }
        temp=c[1]+c[2]+g[0]+g[2]+b[0]+b[1];  //cgb

        if(temp<smallest)
        {
            smallest=temp;
            first='C';
            second='G';
            third='B';
        }
        printf("%c%c%c %lu\n",first,second,third,smallest);
    }
return 0;
}
