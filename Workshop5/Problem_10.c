#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  int a[n],i;
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  int b[100]; int m=0; //chan
  int d[100];  int k=0; //le
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
  	if(a[i]%2==0){
  		b[m]=a[i];
  		m++;
	  }
	if(a[i]%2!=0){
		d[k]=a[i];
		k++;
	}
  }
  int j;
  for(i=0;i<m-1;i++){ //chan
  	for(j=m-1;j>i;j--){
  		if(b[j]<b[j-1]){
  			int temp=b[j];
  			b[j]=b[j-1];
  			b[j-1]=temp;
		  }
	  }
  }
  for(i=0;i<k-1;i++){ //le
  	for(j=k-1;j>i;j--){
  		if(d[j]>d[j-1]){
  			int temp=d[j];
  			d[j]=d[j-1];
  			d[j-1]=temp;
		  }
	  }
  }
  for(i=0;i<m;i++){
  	printf("%d ",b[i]);
  }
  printf("\n");
   for(i=0;i<k;i++){
  	printf("%d ",d[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
