#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char tokens[82];
	char *p1;
	char *p2;
	int b=0;
	printf("input token?: ");
	p1=fgets(tokens,80,stdin);
	p2=strstr(p1," ");
	if(p2!=NULL){
		p2[0]='!';
		while(b!=1){
				p2=strstr(p1,",");
				if(p2!=NULL){
					p2[0]='!';
				}else{
					b=1;
				}
		}
	}
	printf("\n%s\n",p1);
	return 0;
}










