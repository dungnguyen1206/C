#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 char c[20];
  gets(c);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i, cnt=0;
  int l=strlen(c)/2-2;
  int r=strlen(c)/2+2;
  
  while(l<=r){
  	printf("%c",c[l]);
  	l++;
  }
}
  







