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
  while(n<0 || n>10){
  	scanf("%d",&n);
  }
  int a[n],i;
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int prd=1,cnt=0;
  for(i=0;i<n;i++){
  	if(a[i]%2==0){
  		prd*=a[i];
  		cnt++;
	  }
  }
  if(cnt>0){
  	printf("%d",prd);
  }
  else {
  	printf("even number is not exsit");
  }
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
