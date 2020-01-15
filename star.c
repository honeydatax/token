#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int percents(int value);
int bar(int value);
char vbar(int var);

int main(){
	int v;
	int var1=0;
	//head sample 
	for(v=0;v<501;v++){
		fprintf(stdout,"\033c pack %d of 500 installing\n\n\n ",v);
		var1=percents(var1);
		usleep(200000);	
	}
	//tail sample
	printf("\n");
	printf("soft XXXXXX install\n");
	return 0;
}


int percents(int value){
	int r=value;
	r=bar(r);
	return r;
}

int bar(int value){
	int n;
	char c;
	n=value;
	c=vbar(n);
	printf("%c\n\n\n",c);
	n++;
	if(n>3) n=0;
	return n;
}

char vbar(int var){
	char r;
	if (var==0)r='|';
	if (var==1)r='/';
	if (var==2)r='_';
	if (var==3)r='\\';
	return r;
}










