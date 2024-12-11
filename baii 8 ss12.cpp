#include<stdio.h>
int ucln(int a,int b){
	if (a==0){
		return b;
	}
	if (b==0){
		return a;
	}
	while(a!=b){
		if(a<b){
			b=b-a;
		} else{
			a=a-b;
		}
	}
	return b;
}
int main(){
	int a;
	int b;
	printf("moi ban nhap vao so dau tien: ");
	scanf("%d",&a);
	printf("moi ban nhap so tiep theo: ");
	scanf("%d",&b);
	printf("uoc chung lon nhat la %d",ucln(a,b));
	return 0;
}
