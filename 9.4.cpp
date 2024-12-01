#include <stdio.h>
#define Size  100

int main(){
	int select,add,change, a,changeLength, delLength ,addLength,i,currentLength = 0,ar[Size] = {0};
    printf("\n");
    do{
    	
    printf("MENU\n\n");
    printf("1.Nhap vao mang\n2.Hien thi mang\n3.Them phan tu\n4. Sua phan tu\n5.Xoa phan tu\n6.Thoat");
    printf("\nLua chon cua ban: ");
    scanf("%d", &select);
    switch(select){
    	
    	
    	
    	
    	
    	case 1:
		printf("moi ban nhap so phan tu co trong bang: ");
	scanf("%d",&a);
	for ( i = 0; i < a; i++){
	printf("moi ban nhap phan tu thu %d: ", i + 1);
	scanf("%d", &ar[i]);
	currentLength++;
	}
	break;
	
	
	
	    case 2:
	    	printf("cac phan tu ban da nhap la: ");
	for (i = 0; i < currentLength; i ++){
		printf("%d ",ar[i]);
	}
    printf("\n");
    break;
    
    
    
        case 3:
        
    printf("moi ban nhap them vi tri vao bang: ");
    scanf("%d", &addLength);
   	printf("moi ban nhap them so vao bang: ");
   scanf("%d", &add);
   
   
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
}
   break;
   
   
   
       case 4:
       	printf("moi ban nhap sua vi tri doi trong bang: ");
   scanf("%d", &changeLength);
   
   
   if (changeLength < 0 || changeLength >= currentLength + 1){
   	printf("vi tri k hop le!!");
   }else{
   	printf("moi ban nhap so doi vao vi tri can sua: ");
   scanf("%d", &change);
   ar[changeLength - 1] = change;
}
   break;
        case 5:
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
    break;
}
}while(select != 6);
    return 0;
}
