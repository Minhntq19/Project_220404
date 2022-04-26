#include <stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int max;
	int t;
	bool f=true;
	for (;n!=0;){
		t=n%10;
		n/=10;
		if(t%2==0){
		f= false;
		printf("n kho phai toan chu so le: ");
		break;
		}	
	}
	if(f==true){
		printf("n toan chu so le");
	}
}
