#include <stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int t;
	for(;n!=0;){
		n/=10;
		if(n/10==0){
			t=n%10;
			break;
		}
	}printf("chu so dau: %d",t);
}
