#include <stdio.h>
int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	int t=0;
	for(;n!=0;){
		t+=n%10;
		n/=10;
	}
	printf("tong chu so cua n: %d",t);
}
