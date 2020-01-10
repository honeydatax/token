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
	listkey();
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
	int i;
	while(b!=1){
		printf("\nkeyword select: ");
		p1=fgets(s,80,stdin);
		p2=strstr(p1,"\n");
		if(p2!=NULL)p2[0]=0;
		p2=strstr(p1,"\r");
		if(p2!=NULL)p2[0]=0;
		i=findkey(p1);
		printf("\nkeyword code: %d\n",i);
		if(i==-1)b=1;
	}
	printf("\nerror keyword\n");
}
