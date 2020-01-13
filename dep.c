#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *f1;
char key[2000][82];
int count;
void addkey(char *text);
void inputkey();
void listkey();

int main(){
	count=0;
	system("apt-cache depends gcc > list.lst");
	printf("\n# dependecy list\n\n");
	inputkey();
	listkey();
	return 0;	
}


void addkey(char *text){
	char *p1=&key[count][0];
	char *p2;
	strcpy(p1,text);
	p2=strstr(text,"Suggests:");
	if(p2!=NULL){
		p2=p2+10;
		strcpy(p1,p2);
	}	

	p2=strstr(text,"Recommends");
	if(p2!=NULL){
		p2=p2+11;
		strcpy(p1,p2);
	}	

	p2=strstr(text,"Depends");
	if(p2!=NULL){
		p2=p2+8;
		strcpy(p1,p2);
	}	

	count++;
}

void listkey(){
	char *p1;
	char *p2;
	int n;
	for (n=count-1;n>-1;n--){
		p1=&key[n][0];
		p2=strstr(p1,"Conflicts:");
		if(p2==NULL)printf("sudo apt-get install %s \n",p1);
	}
}



void inputkey(){
	int b=0;
	f1=fopen("list.lst","r+");
	char s[82];
	char l[82];
	char *p1;
	char *p2;
	char *p3;
	char ss[]="";
	int i;
	while(b!=1){
		p1=fgets(s,80,f1);
		if (p1!=NULL){
			p2=strstr(p1,"\n");
			if(p2!=NULL)p2[0]=0;
			p2=strstr(p1,"\r");
			if(p2!=NULL)p2[0]=0;
			p2=strstr(p1,"<");
			if(p2!=NULL)p2[0]=32;
			p2=strstr(p1,">");
			if(p2!=NULL)p2[0]=32;
			addkey(p1);
		}else{
			b=1;
		}
	}
	fclose(f1);
}










