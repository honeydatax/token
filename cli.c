#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexs=0;
char *keyword[150];
void addkey(char *text);
void listkey();
void inputkey();
int findkey(char *text);

int main(){
	addkey("ls"); //list dir
	addkey("df"); //disk free
	addkey("cd"); //change dir
	addkey("mkdir"); //create a dir
	addkey("rmdir"); //remove dir
	addkey("clear"); //clear screen
	addkey("rm");  //remove file
	addkey("echo");  //print screen msg
	addkey("printf");  //print screen msg
	addkey("cat");  //list file on screen
	addkey("cp");  //list file on screen
	addkey("exit");  //test exit
	inputkey();
	return 0;	
}


void addkey(char *text){
	keyword[indexs]=text;
	indexs++;
}


void listkey(){
	int n=0;
	printf("list of keywords: \n");		
	for (n=0;n<indexs;n++){
		printf("%s\n",keyword[n]);	
	}
}

int findkey(char *text){
	int n=0;
	int rets=-1;
	for (n=0;n<indexs;n++){
		if (strcmp(text,keyword[n])==0){
			rets=n;
			n=indexs+2;
		}
		
	}
	return rets;
}


void inputkey(){
	int b=0;
	char s[82];
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
			p2=strstr(p1," ");
			if (p2!=NULL){
				p3=p2+1;
				p2[0]=0;
			}else{
				p3=ss;
			}
			i=findkey(p1);
			printf("%d %s\n",i,p3);
			if(i==-1){
				b=1;
				fprintf(stderr,"keyword \"%s\" not in this version\n",i);
			}
		}else{
			b=1;
		}
	}
	
}
