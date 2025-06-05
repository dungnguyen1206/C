#include<stdio.h>
#include <stdlib.h>
void inputArray(int *arr, int *size){
	int i;
	printf("Enter the number of elements (1-100) :");
	scanf("%d",size);
	while(*size>100 || *size < 1){
		printf("Invalid size! Please enter a number between 1 and 100. \n");
		printf("Enter the number of elements (1-100) :");	
		scanf("%d",size);
	}
	printf("\nEnter %d number :\n", *size);
	for(i=0; i<*size;i++){
		printf("Number %d:",i+1);
		scanf("%d", arr+i);
	}
}
void displayArray(int arr[], int size){
	int i;
	printf("Array elements :\n");
	for(i=0 ; i< size ; i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
int searchValue(int arr[],int size,int target){

     int i;
     for(i=0 ; i<size ; i++){
     	if (arr[i]==target){
     		return i;
		 }	 
	 }
	 return -1;
	 }
void calculatestatistics(int arr[], int size){
	int i; int sum=0, Max=arr[0], Min=arr[0];
	for(i=0;i<size;i++){
		sum+=arr[i];
		if(arr[i]>Max) Max=arr[i];
		else if (arr[i]<Min) Min=arr[i];
	}
	float avg = (float)sum/size;
	printf("Sum : %d", sum);
	printf("\nAverage : %.2f",avg);
	printf("\nMax : %d",Max);
	printf("\nMin : %d",Min);
}
int main(){
	int size=0;
	int *arr = (int*) calloc(100,sizeof(int)), target, index, choice; 
	do {
	printf("\n--- Menu ---\n");
	printf("1. Input data");
	printf("\n2. Display array");
	printf("\n3. Search for a number");
	printf("\n4. Calculate statistics (Sum, Average, Max, Min)");
    printf("\n5. Exit");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    
    
    switch(choice){
    	case 1 : // input data
    	    inputArray(arr,&size);
	    	break;
			
		case 2:{
			if(size>0){
				displayArray(arr,size);
			}
			else {
				printf("No data to display. Please input data first.\n");
			}
			break;
		}
		case 3 :{
			if(size>0){
				printf("Enter the number you want to search for :");
				scanf("%d",&target);
				index = searchValue(arr,size,target);
				if(index==-1){
					printf("The number %d is not found in the array\n", target);
				}
				else{
					printf("The number %d is found at index %d\n",target, index);
				}
			}
			else {
				printf("No data to display. Please input data first.\n");
			} 
			break;
		}
		case 4:{
			if(size>0){
				calculatestatistics(arr,size);
			}
			else {
				printf("No data to display. Please input data first.\n");
			} 
			break;
		}
		case 5 :{
			printf("Exit the program.\n");
			break;
		}
		default:
			printf("Invalid choice. please try again.\n");
	}
	}
	while(choice!=5);
	free(arr);
	return 0;
}