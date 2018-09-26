#include<stdio.h>

int main()
{
	int n1,n2,i,ans;
	printf("Enter n1,n2:");
	while(scanf("%d %d",&n1,&n2))
	{
		if (n1<=-1) {return 0;}
		i=n1;
		ans=0;
		while(i<=n2){ans=ans+i;i=i++;}
		printf("sum(%d,%d) = %d\n",n1,n2,ans);
		printf("Enter n1,n2:");
	}
}
