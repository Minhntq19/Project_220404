#include <stdio.h>
int main(){
	int a;
	printf("nhap so a: ");
	scanf("%d",&a);
	if((a>1)&&(a<8)){
		printf("day la thu: %d",a);	
	}else{
		if(a==8){
			printf("day la chu nhat");
		}else{
			printf(" day khong phai ngay trong tuan");
		}
	}
}
