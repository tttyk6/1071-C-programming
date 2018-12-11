#include<stdio.h>

int main()
{

    int n1,n2;
    float k1, k2;



    printf("Enter height (-1 to exit): ");
    scanf("%d %d",&n1, &n2);

    while(n1!=-1 || n2!=-1)
    {
        int nt=n2-n1;

        for(int i=1; i<=nt+1; i++)
        {
            k1=(18.5*((n1+i-1)*(n1+i-1)))/10000;
            k2=(24.0*((n1+i-1)*(n1+i-1)))/10000;
            printf("%d cm: %.1f ~ %.1f (kg) \n",n1+i-1,k1,k2);

        }
        printf("Enter height (-1 to exit): ");
        scanf("%d %d",&n1, &n2);
    }
    printf("Bye! Coding by your_ID 407410298\n");




}
