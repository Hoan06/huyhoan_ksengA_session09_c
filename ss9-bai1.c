#include <stdio.h>

int main(){
	
	int array[100];
	int index,n,a;
	printf("moi ban nhap so luong ");
	scanf("%d",&a);
	
	for (int i=0;i<a;i++){
		
	    printf("moi ban nhap phan tu thu %d: ",i+1);
	    scanf("%d",&array[i]);
	}
    printf("moi ban nhap index ");
	scanf("%d",&index);
	printf("moi ban nhap gia tri ");
	scanf("%d",&n);
	for (int i=a+1;i>=index;i--){
		array[i]=array[i-1];
	}
	array[index]=n;
	for(int i=0;i<=a;i++){
		printf(" %d ",array[i]);
	}
	
	return 0;
}
