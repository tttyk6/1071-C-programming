#include<stdio.h>

int main()
{

    int a,b1,b2,b3,b4,c1,c2;
    while(a!=-1)
    {
        printf("Enter N (-1 to exit): ");
        scanf("%d",&a);
        b1=a/1000;
        b2=a/100-b1*10;
        b3=a/10-b1*100-b2*10;
        b4=a-b1*1000-b2*100-b3*10;
        c1=(b1+5)%10;
        c2=(b3+5)%10;

        printf("encode(%d) = %d%d%d%d // by calling (N)\n  ",a ,b3,b4,c1,b2);
        printf("decode(%d%d%d%d) = %d// by calling (N)\n  ",b3,b4,c1,b2,a);

    }
    printf("Enter N (-1 to exit): ");
    scanf("%d",&a);

}
