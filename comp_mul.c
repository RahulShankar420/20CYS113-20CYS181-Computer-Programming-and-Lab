#include<stdio.h>
typedef struct{
	int real;
	int img;
}comp;

int main(){
	comp a,b,r;
	printf("first value:");
	scanf("%d%d",&a.real,&a.img);
	printf("second value:");
	scanf("%d%d",&b.real,&b.img);

	r.real=(a.real*b.real)-(a.img*b.img);
	r.img=(a.real*b.img)-(a.img*b.real);
	printf("The resultant complex number is %d+i%d",r.real,r.img);
	return 0;
}