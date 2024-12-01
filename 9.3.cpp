#include <stdio.h>
#define Size  100

int main(){
	int  a, delLength,i,currentLength = 0,ar[Size] = {0};
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


   printf("moi ban nhap sua vi tri can xoa trong bang: ");
   scanf("%d", &delLength);
   if (delLength < 0 || delLength >= currentLength + 1){
   	printf("vi tri k hop le!!");
   }else{
   	for( i = delLength - 1; i < currentLength - 1; i ++){
   		ar[i] = ar[i + 1];
	   } currentLength --;
   	printf("Mang sau khi xoa: ");
        for (i = 0; i < currentLength; i++) {
            printf("%d ", ar[i]);
   }
   }
   	return 0;
   }
