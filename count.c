#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char tokens[82];
	char *p1;
	char *p2;
	int count;
	int b=0;
	printf("input token?: ");
	p1=fgets(tokens,80,stdin);
	p2=strstr(p1," ");
	count=1;
	if(p2!=NULL){
		p2[0]='!';
		count++;
		while(b!=1){
				p2=strstr(p1,",");
				if(p2!=NULL){
					p2[0]='!';
					count++;
				}else{
					b=1;
				}
		}
	}
	p2=strstr(p1,"\n");
	if(p2!=NULL)p2[0]='!';
	p2=strstr(p1,"\r");
	if(p2!=NULL)p2[0]='!';
	printf("\n%s\ntoken count: %d\n",p1,count);
	return 0;
}










