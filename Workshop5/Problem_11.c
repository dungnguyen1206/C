#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int check(char c[], char d[]){ // kiem tra xem hai chuoi co giong nhau khong 
	if(strlen(c)!=strlen(d)) return 0;
	else {
		int i;
		for(i=0;i<strlen(c);i++){
			if(toupper(c[i])!=toupper(d[i])){
				return 0;
			}
		}
		return 1;
	}
}
void find(char c[], char d[]){// tim so lan xuat hien cua sau s trong sau c
	char *word = strtok(c," ");
  int cnt=0;
  while(word != NULL){
  	if(check(word,d)){
  		cnt++;
	  }
	  word= strtok(NULL," ");
  }
  if(cnt >0){
  	printf("Product '%s' found %d time(s)", d, cnt);
  }
  else printf("Product '%s' not found",d);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char c[1000];
  gets(c);
   char s[1000];
  gets(s);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

find(c,s);
  



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
