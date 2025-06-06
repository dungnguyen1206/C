#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000];
	scanf("%s",c);
	int i;
	int cnt[255]={0};
	for(i=0;i<strlen(c);i++){
		++cnt[c[i]];
	}
	for(i=0;i<255;i++){
		if(cnt[i] && isdigit(i)){
			printf("%c : %d\n",i,cnt[i]);
		}
		} 
		return 0;
	}