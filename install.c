#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *f1;
FILE *f2;

void addkey(char *text);
void inputkey();

int main(){
	system("ls > list.lst");
	//head sample
	printf("zip install.zip ");
	inputkey();
	//tail sample
	printf(" \n");
	return 0;	
}


void addkey(char *text){
	fprintf(stdout," %s ",text);
}




void inputkey(){
	int b=0;
	char s[82];
	char l[82];
	char *p1;
	char *p2;
	char *p3;
	char ss[]="";
	int i;
	f1=fopen("list.lst","r+");
	while(b!=1){
		p1=fgets(s,80,f1);
		if (p1!=NULL){
			p2=strstr(p1,"\n");
			if(p2!=NULL)p2[0]=0;
			p2=strstr(p1,"\r");
			if(p2!=NULL)p2[0]=0;
			addkey(p1);
		}else{
			b=1;
		}
	}
	
}
