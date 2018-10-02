#include<stdio.h>

int main(){

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

      if(choice==3)break;

      switch(choice)
      {
    case 1:
         printf("Enter height width: ");
         scanf("%d %d", &height, &width);
         for(int i=1;i<=height;i++){
            for(int j=1;j<=width;j++){
                if(i==1 || i<=height || j==1 || j<=width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
         }
         break;
    case 2:
        printf("Enter height ,type ,filled: ");
        scanf("%d %d %d ", &height, &type, &filled);
        drawVertTri(height,type,filled);
        break;
      }
    }
    return0;
    void drawVerTri(int height, int type, int filled);
    {
        switch(type)
        {
            case 1:if(filled){
            for(int i=1;i<=height;i++){
                prchar('*',i);
                printf("\n"));
            }
            }else{i==1 || i==height){
                prchar('*',i);
                }else{
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                }
                 printf("\n");

                }
            }
        }
    }





        for(int i=1;i<=height;i++){
            for(int j=1;j<=type;j++){
                if(j==1 || i==height || i==j)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
         }
         break;
         return 0;
          }
     }
}











