#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void hambu2(char c[]){
	int i;int d=0;
  for(i=strlen(c)-1;i>=0;i--){
  	if(c[i]=='1'){
  		d=i; 
		break;
	  }
  }
  if(d){
  for(i=d-1;i>=0;i--){
  	if(c[i]=='0'){
  		c[i]='1';
	  }
    else if(c[i]=='1'){
		c[i]='0';
	}
  }
  }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char c[9];
  fgets(c,sizeof(c),stdin);
  hambu2(c);

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s",c);
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
