#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char tokens[82];
	char *p1;
	char *p2;
	printf("input token?: ");
	p1=fgets(tokens,80,stdin);
	p2=strstr(p1," ");
	if(p2!=NULL)p2[0]='!';
	printf("\n%s\n",p1);
	return 0;
}
