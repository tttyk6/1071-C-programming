#include<stdio.h>

int main ()
{

    int h;
    int wb,wf;
    int bb,bf;


    while(h!=-1)
    {
        printf("Enter height (-1 to exit):  ");
        scanf("%d",&h);

        bf=1;
        wf=h;
         for(int i=1; i<h; i++)
        {
            for(wb=1; wb<wf; wb++)
            {
                printf("-");
            }
           /* for(bb=1;bb<bf;bb++)
            {
                printf("*");
            }

*/

        }
        wf=wf-1;
        bf=bf+1;
        printf("\n");

    }





printf("Enter height (-1 to exit):   ");
return 0;
}
