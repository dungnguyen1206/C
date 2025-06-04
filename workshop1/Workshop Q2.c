#include<stdio.h>
#include<math.h>
int main (){
	int m,n ,GCD , LCM;
	int snt = 0; //kiểm tra xem có ít nhất 1 số nt hay không 
	printf("Enter m :"); scanf("%d",&m);
	printf("Enter n :"); scanf("%d",&n);
	// xác định số nhỏ hơn làm giới hạn
	int min = (m<n) ? m : n;
	printf("1 . common prime dividers of m and n are :  ");
	// xét các giá trị từ 1 --> min để tìm ước chung 
	for( int i = 1 ; i <= min ; i++){
		if (m%i==0 && n%i==0){ // kiểm tra ước chung
			int x=1;
			if(i<2){ // điều kiện số nguyên tố phải lớn hơn 2 
				x=0;
			}
			for (int j = 2; j <= sqrt(i); j++){ // kiểm tra số nguyên tố 
				if (i%j == 0){
					x=0;
					break;
				}
			  }
			  if(x){
			printf("%d ",i);
			snt = 1 ;
		}
		}
} 
    if ( snt==0){ //  trường hợp không có bất kì ước nguyên tố chung nào 
    	printf("there no common prime numbers !");
	}
    printf("\n");
    int a = m , b = n ,r; // tìm ước chung lớn nhất bằng phương pháp Euclid
    while(b!=0){
    r = a%b;
	a = b;
    b = r;
	}
	 GCD = a;
	printf("2. the greatest common divide (GCD) of them is : %d",GCD);
	printf("\n");
	 LCM = (m*n) / GCD; // tìm bội chung nhỏ nhất 
	printf("3. the least common multiple (LCM) of them is : %d ", LCM);
	return 0;
}