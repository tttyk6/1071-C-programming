#include<stdio.h>
int main()
{

    int height1;
    int height2;
    float weight1;
    float weight2;
    int i1;


    while(1)
    {



        printf("Enter height (-1 to exit): ");
        scanf("%d %d",&height1, &height2);
        if(height1==-1,height2==-1)
        {
            printf("Bye! Coding by your_ID");
            return 0;
        }

        else
        {
            for(int i1=height1; i1<=height2; i1++)

            {
                weight1=18.5*((i1*i1))/10000;
                weight2=24.0*((i1*i1))/10000;
                printf(" %d cm: %.1f ~ %.1f (kg) \n",i1, weight1, weight2);


            }
        }

    }





}

/*Enter height
             (-1 to exit): 170 175
             170 cm: 53.9 ~ 69.0 (kg)
             171 cm: 54.0 ~ 70.0 (kg)
             172 cm: 54.5 ~ 71.0 (kg)
             173 cm: 55.0 ~ 72.0 (kg)
             174 cm: 56.0 ~ 72.5 (kg)
             175 cm: 56.5~73.5(kg)*/

