#include<stdio.h>
void input(int arr[],int size){
	for(int i = 0;i<size;i++){
		printf("moi nhap phan tu thu arr[%d] = \n",i);
		scanf("%d",&arr[i]);
	}
}
void printfItem(int arr[],int size){
	for(int i = 0 ;i<size;i++){
		printf("phan tu thu arr[%d] co gia tri la %d \n",i,arr[i]);
	}
}
void addItem(int arr[],int index,int leng){
	int a;
	for(int i = leng;i > index;i--){
		arr[i]=arr[i-1];
	}
	printf("hay nhap phan tu ban muon them vao: \n");
	scanf("%d",&a);
	arr[index]=a;
}
void repItem(int arr[],int index){
	int a;
	printf("nhap so ban muon sua: ");
	scanf("%d",&a);
	a=arr[index];
}
void deleItem(int arr[],int index,int leng){
	for(int i = index;i<leng;i++){
		arr[i]=arr[i+1];
	}
}
int main(){                      
	int arr[100];
	int choice;
	int size=sizeof(arr)/sizeof(int);
	int add;
	int leng;
	int rep;
	int del;
	while(choice < 8){
		printf("------MENU------\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu.\n");
		printf("2.In ra gia tri cac phan tu dang quan ly.\n");
		printf("3.Them mot phan tu vao vi tri chi dinh.\n");
		printf("4.Sua mot phan tu o vi tri chi dinh\n");
		printf("5.Xoa mot phan tu o vi tri chi dinh\n");
		printf("6.Sap xep cac phan tu (Khi lua chon menu cha thi hien thi menu con)\n");
		printf("7.Tim kiem phan tu nhap vao\n");
		printf("8.Thoat chuong tirnh.\n");
		printf("moi ban nhap lua chon cua minh: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("moi ban nhap so luong phan tu:  \n");
				scanf("%d",&size);
				input(arr,size);
				break;
			case 2:
				printfItem(arr,size);
				break;
			case 3:
				printf("ban muon them phan tu vao vi tri: \n");
				scanf("%d",&add);
				addItem(arr,add,leng);
				size++;
				break;
			case 4:
				printf("nhap vi tri ban muon sua: ");
				scanf("%d",&rep);
				repItem(arr,rep);
				break;
			case 5:
				printf("ban muon xoa phan tu nao: ");
				scanf("%d",&del);
				deleItem(arr,del,size);
				break;
			case 6:
				break;
			case 7:
				break;
			default:
				break;		
		}
	}
	return 0;
}
