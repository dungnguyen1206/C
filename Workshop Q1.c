#include<math.h>
#include<stdio.h>
int  main (){
	int n, s1=0, s2=1 ;
	float s3=0.0;
	printf("Enter n :");
	scanf("%d",&n);
	while(n<=5){
		printf("n must be >5 , please reenter !\n");
		printf(" Enter n :");
		scanf("%d",&n);
	}
	for(int i=1 ; i <= n; i++){
		s1+=i;
	}
	for(int i=1;i <=n ; i++){
		s3+=(1.0/i);
	}
	for (int i = 1 ; i<=n ; i++){
		s2*=i;
	}
	printf("s1 = %d\n",s1);
	printf("s2 = %d\n",s2);
	printf("s3 = %.4f\n",s3);
	printf("\n");
    printf("reenter n : ");
    scanf("%d",&n);
    int nt = 1; // giả sử n là số nguyên tố
    if(n <2 )  nt = 0;
    else
	 for(int i=2; i<=sqrt(n);i++){
	    if(n%i==0){
	    	nt = 0;
	}
}
    if(nt){
        printf("%d is a prime number.",n);}
    else 
        printf("%d is not a prime number.",n);

return 0;
}