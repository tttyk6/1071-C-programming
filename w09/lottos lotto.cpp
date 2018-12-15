#include<stdio.h>
#define M 100
#include<time.h>
#include<stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};
struct lot
{
    Date date;
    int num[6];
};
int report(int num[],int pum)
{
    for(int i=1;i<pum;i++)
    {
        if(num[i]==num[pum])
            return 1;
    }
    return 0;
}
int main()
{
    Date date;
    Date dates[M];
    lot lots[M];
    printf("Enter N: ");


    int n;
    int t;
    scanf("%d",&n);
    srand(time(NULL));

    for(int i=1; i<=n; i++)
    {
        dates[i].year = rand()%11+2010;
        dates[i].month = rand()%12+1;
        dates[i].day = rand()%31+1;
        if(dates[i].month == 2)
        {
            if(dates[i].day>28)
            {
                dates[i].day=dates[i].day-3;
            }
        }
        else if(dates[i].month == 4||dates[i].month == 6||dates[i].month == 9||dates[i].month == 11)
        {
            if(dates[i].day==31)dates[i].day=dates[i].day-1;
        }

        printf("%d/%02d/%02d  ", dates[i].year, dates[i].month, dates[i].day);
        for(int j=1; j<=6; j++)
        {
            int t1,t2,t3,t4,t5;
            do
            {
                lots[i].num[j] = rand()%48+1;
                t = lots[i].num[j];
            }
            while(report(lots[i].num,j));
            lots[i].num[j]=t;
            printf("%02d ",lots[i].num[j]);
        }
        printf("\n");
    }
}
