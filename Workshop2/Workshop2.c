#include<stdio.h>
#include<math.h>
   float basic_salary(){
   	float n;
   	printf("Enter the basic salary (>=0) :");
   	scanf("%f",&n);
   	while(n<0){
   		printf("the salary must be >0 \n");
   		printf("Enter the basic salary (>=0) :");
   		scanf("%f",&n);
	   }
	   return n;
   }
   float Allowance(float n){
        float x;   	
	   if(n<6000000){
   		x=n*25/100;
	   }
	   else if(6000000<=n && n<=15000000){
	   	x=n*15/100;
	   }
	   else if(n>15000000){
	   	x=n*10/100;
	   }
	   return x;
   }
   float tax(float n){
   	float x = n + Allowance(n);
   	float t;
   	if(x<=8000000){
   		t=0;
	   }
	else if(x>8000000){
		t=(x-8000000)*10/100;
	}
	return t;
   }
   float Net_income(float n){
   	float x = Allowance(n)+ n - tax(n);
   	return x;
   }
int main(){
	int i,n;
	printf("Enter number of employees : ");
	scanf("%d",&n);
	while(n<0){
		printf("the number of employees must be > 0 \n");
		printf("Enter number of employees : ");
	    scanf("%d",&n);
	}
	float total_salary=0;
    int count_25=0 , count_15=0 , count_10=0;
	for(i=1;i<=n;i++){
		printf("Processing employee %d : \n",i);
		float salary = basic_salary();
		if(salary<6000000) count_25++;
		else if(6000000<=salary && salary<=15000000) count_15++;
		else if(salary > 15000000) count_10++;
		printf("basic salary  : %.2f\n", salary);
		printf("Allowance : %.2f\n",Allowance(salary));
		printf("Tax Deduction : %.2f\n",tax(salary));
		printf("Net income : %.2f\n",Net_income(salary));
		total_salary+=Net_income(salary);
		printf("\n");
	}
	printf("=== Salary Statistics ===\n");
	printf("Total salary cost of the company : %.2f\n", total_salary);
	printf("Number of employee with allowance of 25% : %d\n",count_25);
	printf("Number of employee with allowance of 15% : %d\n",count_15);
	printf("Number of employee with allowance of 10% : %d\n",count_10);
	return 0;
}