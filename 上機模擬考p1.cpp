#include<stdio.h>
int main()
{
    int integer1;
    int integer2;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    int ans5;

    printf("Enter two integers: ");
    scanf("%d %d",&integer1,&integer2);

    ans1=integer1+integer2;
    ans2=integer1-integer2;
    ans3=integer1*integer2;
    ans4=integer1/integer2;
    ans5=integer1%integer2;

    printf("%d+%d=%d \n", integer1, integer2, ans1);
    printf("%d-%d=%d \n", integer1, integer2, ans2);
    printf("%d*%d=%d \n", integer1, integer2, ans3);
    printf("%d/%d=%d \n", integer1, integer2, ans4);
    printf("%d%%%d=%d \n", integer1, integer2, ans5);


}











/*Enter two integers: 25 10

25 + 10 = 35
25 –10 = 15
25 * 10 = 250
25 / 10 = 2
25 % 10 = 5
*/
