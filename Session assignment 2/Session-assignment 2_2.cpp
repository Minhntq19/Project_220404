#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	printf("nhap thang: ",a);
	scanf("%d",&a);
	printf("nhap ngay: ",b);
	scanf("%d",&b);
	if(a<=12&&b<=31){
		if(a==1||a==3||a==7||a==8||a==10||a==12){
			if(a==1){
				c=b;
				d=(c%7)+1;
				printf("Day la ngay thu : %d trong nam\n",c);
				if(d>=1){
					printf(" Day la thu: %d \n",d);
				}else{
					printf(" Day la chu nhat.");
				}
			}else{
				if(a<=7&&a!=1){
					c=((a/2)*31)+(((a/2)*30)-2)+b;
					d=(c%7)+1;
					printf("Day la ngay thu : %d trong nam\n",c);
					if(d>=1){
						printf(" Day la thu: %d \n",d);
					}else{
						printf(" Day la chu nhat.");
					}
				}else{
					c=((a/2)*31)+(((a/2)-1)*30)-2+b;
					d=(c%7)+1;
					printf("Day la ngay thu : %d trong nam\n",c);
					if(d>=1){
						printf(" Day la thu: %d \n",d);
					}else{
						printf(" Day la chu nhat.");
				}
			}
		}
		}else{
			if(a==2&&b<=28){
				c=b+31;
				d=(c%7)+1;
				printf("Day la ngay thu : %d trong nam\n",c);
				if(d>=1){
					printf(" Day la thu: %d \n",d);
				}else{
					printf(" Day la chu nhat.");
				}
			}else{
				if(a<8&&b<=30&&a!=2){
					c=((a/2)*31)+(((a/2)-1)*30)-2+b;
					d=(c%7)+1;
					printf("Day la ngay thu : %d trong nam\n",c);
					if(d>=1){
						printf(" Day la thu: %d \n",d);
					}else{
						printf(" Day la chu nhat.");
					}
				}else{
					if(a>=8&&a<=12&&b<=30){
						c=(((a/2)+1)*31)+(((a/2)-1)*30)-2+b;
						d=(c%7)+1;
						printf("Day la ngay thu : %d trong nam\n",c);
						if(d>=1){
							printf(" Day la thu: %d \n",d);
						}else{
							printf(" Day la chu nhat.");
						}
					}else{
						printf("Nhap sai ngay thang");
					}
				}
			}
		}
	}else{
		printf("Nhap sai ngay thang");
	}
}
