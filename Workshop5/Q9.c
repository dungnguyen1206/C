#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
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
//void chuyendoi3(int n){ // chuyen tu thap phan sang nhi phan va bat phan
//	int c=0, s=n;
//  	while(n>0){
//  		c++;
//  		n/=8;
//	  }
//	  int a[c];
//	  n=s;
//	int i;
//	for(i=c-1;i>=0;i--){
//		a[i]=n%8;
//		n/=8;
//	}
//	for(i=0;i<c;i++){
//		printf("%d",a[i]);
//	}
//  }

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(nt(n)){
  	int c=0, s=n;
  	while(n>0){
  		c++;
  		n/=8;
	  }
	  int a[c];
	  n=s;
	int i;
	for(i=c-1;i>=0;i--){
		a[i]=n%8;
		n/=8;
	}
	for(i=0;i<c;i++){
		printf("%d",a[i]);
	}
  }
  else{
  	printf("%d is not a prime number",n);
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
