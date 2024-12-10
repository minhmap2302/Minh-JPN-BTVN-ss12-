#include<stdio.h>
	void mang(int a[],int size){
		for(int i=0;i<size;i++){
			printf("a[%d]\n",a[i]);
		}
}
int main(){
	int numbers1[] = {3,4,7,39,6};
	int size = 5;
	mang(numbers1,size);
	return 0;
}
