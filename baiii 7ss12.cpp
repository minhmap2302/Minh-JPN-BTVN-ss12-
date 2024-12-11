#include <stdio.h>
void item(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("moi ban nhap phan tu a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
}
void prinItem(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for( int j=0;j<n;j++){
			printf("%d",&a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[100][100];
	int m;
	int n;
	printf("hay nhap so hang cho mang : ");
    scanf("%d",&m);
    printf("hay nhap so cot cho mang : ");
    scanf("%d",&n);
    item(a, m, n);
    prinItem(a, m, n);
    return 0;
}
