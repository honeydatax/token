#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void percents(int value);

int main(){
	int v;
	//head sample 
	printf("install soft XXXXXX ...\n");
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
	fprintf(stdout,"%d \%            \n",value);
	
}













