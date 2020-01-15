#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void percents(int value);
void bar(int value);

int main(){
	int v;
	//head sample 
	for(v=0;v<101;v++){
		percents(v);
		sleep(1);	
	}
	//tail sample
	printf("\n");
	printf("soft XXXXXX install\n");
	return 0;
}


void percents(int value){
	
	fprintf(stdout,"\033c");
	printf("install soft XXXXXX ...\n");
	fprintf(stdout,"%d \%	|",value);
	bar(value);
	fprintf(stdout,">\n",value);
}

void bar(int value){
	int n;
	for (n=0;n<value/4;n++){
		printf("-");
	}
}












