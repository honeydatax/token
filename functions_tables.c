#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printff(int n);
int add(int n,int value);
void printall();
int main(){
	printall();	
}

int add(int n,int value){
	n=n+value;
}


void printff(int n){
	printf("debuging %d + %d = %d \n",n,n,add(n,n));
}

void printall(){
	int a=0;
	int b=0;
	for(a=0;a<16;a++){
		printff(a);
	}


}
