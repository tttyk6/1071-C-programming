#include<stdio.h>
int main(){
    float BMI;
    float height;
    float weight;
    printf("Enter ���� �魫:");
    while(scanf("%f %f",&height,&weight ))
    {
	printf("%.1f ", BMI=weight/((height/100.)*(height/100.)));
	
	if (BMI>=35) {printf("���תέD\n"); }
	else if (BMI<35 && BMI>=30) {printf("���תέD\n"); }
	else if (BMI<30 && BMI>=27) {printf("���תέD\n"); } 
	else if (BMI<27 && BMI>=24) {printf("�L��\n"); }
	else if (BMI<24 && BMI>=18.5) {printf("���`\n"); }
	else { printf("�L��\n"); }
	printf("Enter ���� �魫:");
	}

}

