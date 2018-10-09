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



void drawTsoTri(int height, int type, int filled)
{

    if(filled)
    {
        int X;
        X=height;
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=i-1; j++)
            {
                printf("-");
            }
            for(int j=1; j=2*X-1; j++)
            {
                if(i==1){
                printf("*");
                }

            else if(i>1){
            printf("*");
            }

            X=X-1;
            }
            printf("\n");
        }








        }

    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height-i; j++)
            {

            }

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

        if(choice==4)break;

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
            drawTsoTri(height, type, filled);

            break;
        }
    }
    return 0;
}







