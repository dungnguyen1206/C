#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX_DAYS 100
typedef struct{
	int sales[MAX_DAYS];
	int days;
	int count;
} SalesData;

void inputSales(SalesData *data) {
        printf("Enter the number of days (1-100): ");
        scanf("%d",&data->days);
     while (data->days <1 || data->days > MAX_DAYS){
     	printf("Invalid number of days! Please try again.\n");
     	 printf("Enter the number of days (1-100): ");
        scanf("%d",&data->days);
	 }
    printf("Enter the sales data for %d days: \n",data->days);
    for (int i = 0; i < data->days; i++) {
        printf("Day %d (Sale value): ", i + 1);
        scanf("%d", &data->sales[i]);
    }
}
void displaySales(const SalesData *data) {
    printf("\nSales data:\n");
    for (int i = 0; i < data->days; i++) {
        printf("Day %d: %d\n", i + 1, data->sales[i]);
    }
}
void sortAscending(SalesData *data) {
    for (int i = 0; i < data->days - 1; i++) {
        for (int j = 0; j < data->days - i - 1; j++) {
            if (data->sales[j] > data->sales[j + 1]) {
                int temp = data->sales[j];
                data->sales[j] = data->sales[j + 1];
                data->sales[j + 1] = temp;
            }
        }
    }
}

// Hàm sắp xếp doanh số giảm dần (Bubble Sort)
void sortDescending(SalesData *data) {
    for (int i = 0; i < data->days - 1; i++) {
        for (int j = 0; j< data->days - i - 1; j++) {
            if (data->sales[j] < data->sales[j + 1]) {
                int temp = data->sales[j];
                data->sales[j] = data->sales[j + 1];
                data->sales[j + 1] = temp;
            }
        }
    }
}

// Hàm tìm kiếm doanh số lớn hơn một giá trị mục tiêu
void searchGreaterThanTarget(const SalesData *data, int target) {
    printf("\nSales value greater than %d:\n", target);
    int found = 0;
    for (int i = 0; i < data->days; i++) {
        if (data->sales[i] > target) {
            printf("\nDay %d: %d ",i+1 ,data->sales[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No sales data greater than the target %d.\n", target);
    }
    printf("\n");
}

int main(){
	SalesData data;
	int choice, target;
	
	do{
		printf("\n=== Enhanced Sales Data Management Menu ==\n");
		printf("1. Input Sales Data \n");
		printf("2. Display Sales Data \n");
		printf("3. Sort Sales Data in Ascending Order\n");
		printf("4. Sort Sales Data in Descending Order\n");
		printf("5. Search for Sales Greater Than a Target\n");
		printf("6. Exit\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
				inputSales(&data);
				break;
		case 2:
			displaySales(&data);
			break;
		 case 3:
		 	sortAscending(&data);
		 	printf("Sales data sorted in ascending order: \n");
		 	displaySales(&data);
		 	break;
		case 4:
			sortDescending(&data);
			printf("Sales data sorted in descending order: \n");
			displaySales(&data);
			break;
		case 5:
			printf("Enter the target sales value: ");
			scanf("%d",&target);
			searchGreaterThanTarget(&data,target);
			break;
		case 6:
			printf("Exiting program.\n");
			break;
		default:
			printf("Invalid choice ! Try again.\n");
	}
	}while(choice!=6);
	system("pause");
	return 0;
}