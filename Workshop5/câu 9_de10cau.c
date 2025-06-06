#include<stdio.h>
#include<math.h>
int nt(int n){
	int i;
	if(n<2) return 0;
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main (){
	int n;
	printf("Enter n = ");scanf("%d",&n);
	int i,j; int x=2;// chon so nguyen to dau tien 
	for(i=1; i<=n ;i++){
		for(j=1 ; j<=i ; j++){
			while(!nt(x)){
				x++;
			}
			printf("%d\t",x);
			x++;
		}
		printf("\n\n");
	}
}