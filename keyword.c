#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexs=0;
char *keyword[150];
void addkey(char *text);
void listkey();

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
	listkey();
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
