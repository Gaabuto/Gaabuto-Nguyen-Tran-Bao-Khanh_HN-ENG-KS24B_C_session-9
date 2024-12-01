#include <stdio.h>
#define Size  100

int main(){
	int add, a, addLength,i,currentLength = 0,ar[Size] = {0};
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

   printf("moi ban nhap them so vao bang: ");
   scanf("%d", &add);
   printf("moi ban nhap them vi tri vao bang: ");
   scanf("%d", &addLength);
   
   
   if( addLength < 0 || addLength >= Size){
   	printf("vi tri k hop le!!");
   }else{
   	 if (addLength >= currentLength){
   	ar[addLength - 1] = add;
   	currentLength = addLength ;

   }else{
   	for ( i = currentLength; i > addLength; i --){
   		ar[i]= ar[i - 1];
	   }
	   currentLength ++;
	   ar[addLength] = add;
   }
   
   
   printf("so da nhap sau khi them la: ");
   for ( i = 0; i < currentLength; i ++){
   	printf("%d ", ar[i]);
   }
	
   }
   
  
	
	
	return 0;
}
