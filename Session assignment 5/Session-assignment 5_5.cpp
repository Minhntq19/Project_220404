#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu");
	scanf("%d",&n);
	int arr[n];
	int min=1;
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}	
	for (int i=0;i<n;i++){
		if(arr[i]>0)
			min=arr[i];
			break;
		}
		for (int j=0;j<n;j++){
			if(arr[j]>0&&arr[j]<min){
				min=arr[j];
			}
		}
	printf("so nha nhat trong mang: %d",min);
}
