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
  int j,c=0;
  int b[100];
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++){
  	int check=1;
  	for(j=0;j<i;j++){
  		if(a[i]==a[j]){
  			check=0; break;
		  }
	  }
	  if(check){
	  	b[c]=a[i];
	  	c++;
	  }
  }
  for(i=0;i<c-1;i++){
  	for(j=c-1;j>i;j--){
  		if(b[j]>b[j-1]){
  			int temp=b[j];
  			b[j]=b[j-1];
  			b[j-1]=temp;
		  }
	  }
  }
  for(i=0;i<c;i++){
  	printf("%d ",b[i]);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
