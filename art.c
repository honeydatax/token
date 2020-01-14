#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addkey();
void inputkey();
char artern[89];
char cchar[89];
void addkey2();


int main(){
	inputkey();
	return 0;	
}


void addkey(){
	int i;
	cchar[79]=0;
	for (i=0;i<77;i++){
		cchar[i]='-';
	}
	cchar[78]='\n';
	cchar[79]=0;
	
}

void addkey2(){
	int i;
	int ii;
	int count=0;
	cchar[79]=0;
	for (i=0;i<13;i++){
		artern[count]='|';
		count++;
		for (ii=0;ii<5;ii++){
			artern[count]=' ';
			count++;
		}
	}
	artern[count]='\n';
	count++;
	artern[count]=0;
	
}



void inputkey(){
	int ii=0;
	int i;
	addkey();
	addkey2();
	
	for (i=0;i<3;i++){
		printf("%s\n",cchar);
		for (ii=0;ii<5;ii++){
			printf("%s",artern);
		}
	}

	
}














