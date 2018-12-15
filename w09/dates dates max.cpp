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
int main()
{
    Date date;
    Date dates[M];
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
        printf("\n");
    }
}
