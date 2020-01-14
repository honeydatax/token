#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printff(int n);
int inc(int n,int value);
void printall();
int main(){
	printall();	
}

int inc(int n,int value){
	n=n+value;
}


void printff(int n){
	printf("%d \n",n);
}

void printall(){
	int a=0;
	int b=0;
	while(b!=1){
		a=inc(a,1);
		printff(a);
		if (a==16)b=1;
	}
}
