#include<stdio.h>

#define MAX 50

void pA(int m[][MAX], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
}

void md(int m[][MAX],int n)
{
    int r=n-1;
    int c=n/2;
    m[r][c]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(i%n==1)
        {
            r=(r-1+n)%n;
        }
        else
        {
            r=(r+1)%n;
            c=(c+1)%n;
        }
        m[r][c]=i;
    }
}
void mk(int m[][MAX],int n)
{
    int r=n-1;
    int c=n/2;
    m[r][c]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(i%n==1)
        {
            r=(r-1+n)%n;
        }
        else
        {
            r=(r-2+n)%n;
            c=(c+1+n)%n;
        }
        m[r][c]=i;
    }
}

int main()
{
    int m[MAX][MAX]={0};
    int n=5;
    printf("\nDiagonal Move\n");
    md(m,n);
    pA(m,n);

    printf("\nKnight Move\n");
    mk(m,n);
    pA(m,n);

}
