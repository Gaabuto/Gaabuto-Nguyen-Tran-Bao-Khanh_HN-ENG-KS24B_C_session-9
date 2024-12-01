#include <stdio.h>
#define Size  100

int main(){
	int change, a, changeLength,i,currentLength = 0,ar[Size] = {0};
	printf("moi ban nhap so phan tu co trong bang: ");
	scanf("%d",&a);
	for ( i = 0; i < a; i++){
	printf("moi ban nhap phan tu thu %d: ", i + 1);
	scanf("%d", &ar[i]);
	currentLength++;
	}
	printf("cac phan tu ban da nhap la: ");
	for (i = 0; i < currentLength; i ++){
		printf("%d ",ar[i]);
	}
    printf("\n");
// 3


   printf("moi ban nhap sua vi tri doi trong bang: ");
   scanf("%d", &changeLength);
   
   
   if (changeLength < 0 || changeLength >= currentLength + 1){
   	printf("vi tri k hop le!!");
   }else{
   	printf("moi ban nhap so doi vao vi tri can sua: ");
   scanf("%d", &change);
   ar[changeLength - 1] = change;
   	
   	 
   printf("mang da nhap sau khi sua la: ");
   for ( i = 0; i < currentLength; i ++){
   	printf("%d ", ar[i]);
}
   }
  
	
	
	return 0;
}
