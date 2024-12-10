#include <stdio.h>
void perfectNumber(int a){
    int sum = 0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("true\n");
    }else{
        printf("false\n");
    }
}
int main() {
    int num1,num2;
    printf("hay nhap mot so bat ki : ");
    scanf("%d",&num1);
    perfectNumber(num1);
    printf("hay nhap so tiep theo : ");
    scanf("%d",&num2);
    perfectNumber(num2);
    return 0;
}
