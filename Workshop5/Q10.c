#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int nt(int n){
	if(n<2) return 0;
	else{
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  int i,cnt=0;
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   while(cnt<4){
  	int k=n+1;
  	if(nt(k)){
  		printf("%d\n",k);
  		cnt++;
	  }
	  n++;
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
