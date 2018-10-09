#include<stdio.h>

void drawRecfilled(int height,int width,int filled)
{
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i<=height || j==1 || j<=width)
                    printf("*");


            }
            printf("\n");
        }



    }

    else
    {


        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height || j==1 || j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }



}


void drawVerTrifilled(int height, int type, int filled)
{
    if(filled)
    {

        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(j==1 || i<=height || i==j)
                    printf("*");
            }

            printf("\n");
        }
    }
    else
    {

        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(j==1 || i==height || i==j)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }



    }
}



void drawTsoTrifilled(int height, int type, int filled)
{

    int wb,wf,sb,sf,i;
    if(filled)
    {
        switch(type)
        {
        case 1:
        {
            wf=height-1;
            sf=1;
            for(i=1; i<=height; i++)
            {
                for(wb=1; wb<=wf; wb++)
                {
                    printf(" ");
                    }
                    for(sb=1; sb<=sf; sb++)
                    {
                        if(sb>=1 || sb==sf)
                        {
                            printf("*");
                        }
                        else if(i==height)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    wf=wf-1;
                    sf=sf+2;
                    printf("\n");
                }
                break;
            }

        case 2:

            wf=0;
            sf=height*2-1;

            for(i=1; i<=height; i++)
            {
                for(wb=1; wb<=wf; wb++)
                {
                    printf(" ");
                }
                    for(sb=1; sb<=sf; sb++)
                    {
                        if(sb>=1 || sb==sf)
                        {
                            printf("*");
                        }
                        else if(i==1)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    wf=wf+1;
                    sf=sf-2;
                    printf("\n");
                }
                break;
            }
        }

    else
    {
        switch(type)
        {

        case 1:
        {
            wf=height-1;
            sf=1;

            for(i=1; i<=height; i++)
            {
                for(wb=1; wb<=wf; wb++)
                {
                    printf(" ");
                }
                for(sb=1; sb<=sf; sb++)
                {
                    if(sb==1 || sb==sf)
                    {
                        printf("*");
                    }
                    else if(i==height)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                wf=wf-1;
                sf=sf+2;
                printf("\n");
            }
            break;
        }





        case 2:

            wf=0;
            sf=height*2-1;
            for(i=1; i<=height; i++)
            {
                for(wb=1; wb<=wf; wb++)
                {
                    printf(" ");
                }
                for(sb=1; sb<=sf; sb++)
                {
                    if(sb==1 || sb==sf)
                    {
                        printf("*");
                    }
                    else if(i==1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                wb=wb+1;
                sb=sb-2;
                printf("\n");
            }
            break;
        }
        }
    }











int main()
{
    int choice;
    int height;
    int width;
    int type;
    int filled;



    while(1)

    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle\n");
        printf("4. Exit\n");
        printf("=>");
        scanf("%d",&choice);

        if(choice==4)
            break;

        switch(choice)
        {
        case 1:
            printf("Enter height width filled: ");
            scanf("%d %d %d", &height, &width, &filled);
            drawRecfilled(height, width, filled);

            break;
        case 2:
            printf("Enter height type filled: ");
            scanf("%d %d %d", &height, &type, &filled);
            drawVerTrifilled(height, type, filled);

            break;
        case 3:
            printf("Enter height type filled: ");
            scanf("%d %d %d", &height, &type, &filled);
            drawTsoTrifilled(height, type, filled);

            break;
        }
    }
    return 0;
}

