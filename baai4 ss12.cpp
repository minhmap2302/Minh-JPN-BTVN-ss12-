#include<stdio.h>
	int FindMaxVaLue(int a[],int size){
		int max = a[0];
		for(int i = 0; i < size; i++){
			if(a[i] > max){
				max = a[i];
			}
		}
		return max;
		
}
int main(){
	int numbers1[] = {3,4,7,39,6};
	int numbers2[] = {5,6,2,5,7,};
	int size = sizeof(numbers1)/sizeof(int);
	printf("Phan tu lon nhat trong mang la %d\n",FindMaxVaLue(numbers1,size));
	printf("Phan tu lon nhat trong mang la %d\n",FindMaxVaLue(numbers2,size));
	return 0;
}
