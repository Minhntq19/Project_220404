#include <stdio.h>
int main(){
	int n;
	printf("nhap sp n: ");
	scanf("%d",&n);
	int tong=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("uoc cua n: %d \n",i);
			tong+=i;
		}
		
	}
	printf("Tong cac uoc: %d",tong);
}
