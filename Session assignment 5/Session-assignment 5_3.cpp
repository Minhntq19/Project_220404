#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu: \n");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap so x:");
	scanf("%d",&x);
	bool f=false;
	for(int i=0; i<n;i++){
		if(x==arr[i]){
			f= true;
			printf("x thuoc mang");
			break;
		}
	}if(f==false)
	printf("x khong thuoc mang");
}
