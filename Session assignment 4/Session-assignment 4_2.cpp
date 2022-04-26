#include <stdio.h>
int main(){
	int a;
	int b;
	printf ("nhap hai so a,b: ");
	scanf("%d",&a);
	scanf("%d",&b);
	int min=a;
	if(min>b){
		min=b;
	}
	for(int i=min;i--;){
		if(a%i==0&&b%i==0){
			printf("UCLN %d \n",i);
			break;
		}
	}
	int max=a;
	if(max<b){
		max=b;
	}
	for(int j=max;j++;){
		if (j%a==0&&j%b==0){
			printf("BCNN: %d \n",j);
			break;
		}
	}
}
