#include <stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int max;
	int t;
	for (;n!=0;){
		t=n%10;
		n/=10;
		if(t>max){
		max=t;
		}
	}
	printf("chu so lon nha: %d",max);
}
