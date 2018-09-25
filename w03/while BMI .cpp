#include<stdio.h>
int main(){
    float BMI;
    float height;
    float weight;
    printf("Enter 身高 體重:");
    while(scanf("%f %f",&height,&weight ))
    {
	printf("%.1f ", BMI=weight/((height/100.)*(height/100.)));
	
	if (BMI>=35) {printf("重度肥胖\n"); }
	else if (BMI<35 && BMI>=30) {printf("中度肥胖\n"); }
	else if (BMI<30 && BMI>=27) {printf("輕度肥胖\n"); } 
	else if (BMI<27 && BMI>=24) {printf("過重\n"); }
	else if (BMI<24 && BMI>=18.5) {printf("正常\n"); }
	else { printf("過輕\n"); }
	printf("Enter 身高 體重:");
	}

}

