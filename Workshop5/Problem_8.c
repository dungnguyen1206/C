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
  char c[n][100];
  getchar( );
  int i;
  for(i=0;i<n;i++){
  	gets(c[i]);
  }
  char s[100];
  gets(s);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   for(i=0;i<n;i++){
  	char *ptr=strstr(c[i],s);
  	if(ptr!=NULL){
  		printf("%s ",c[i]);
	  }
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
