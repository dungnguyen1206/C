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
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int j; 
  for(i=0;i<n;i++){
  	int check=1;
  	for(j=0;j<i;j++){
  		if(a[i]==a[j]){
  			check=0;break;
		  }
	  }
	  if(check){
	  	int cnt=1;
	  	for(j=i+1;j<n;j++){
	  		if(a[i]%2==0 && a[i]==a[j]){
	  			cnt++;
			  }
		  }
	  	if(cnt==2){
	  		printf("%d\n",a[i]);
		  }
	  }
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
