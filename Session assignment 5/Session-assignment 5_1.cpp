#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu: \n");
	scanf("%d",&n);
	int arr[n];
	int t;
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n;i++){
		if(arr[i]%2!=0){
			t+=arr[i];
		}
	}
	printf("tong cac so le trong mang: %d",t);
}
