#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addkey(char *text);
void inputkey();

int main(){
	addkey("\n# head token sample\n\n");
	inputkey();
	return 0;	
}


void addkey(char *text){
	fprintf(stdout,"%s\n",text);
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
	while(b!=1){
		p1=fgets(s,80,stdin);
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
