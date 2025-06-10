#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int y,m;
  scanf("%d",&y);
  scanf("%d",&m);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(m==1||m==3 ||m==5||m==7||m==8||m==10||m==12){
  	   printf("In %d , month %d has 31 days ",y,m);
	  }
  else if( m==4||m==6||m==9||m==11){
  	    printf("In %d , month %d has 30 days ",y,m);
  }
   else if (m==2 && y%4==0 && y%100!=0){
   	printf("In %d , month %d has 29 days ",y,m);
   }
   else printf("In %d , month %d has 28 days ",y,m);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
