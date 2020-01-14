#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printff(int n);
int returnss(int n);
void printall();
int main(){
	printall();	
}

int returnss(int n){
	int nn=-1;
	if (n==0)nn=16;
	if (n==1)nn=15;
	if (n==2)nn=14;
	if (n==3)nn=13;
	if (n==4)nn=12;
	if (n==5)nn=11;
	if (n==6)nn=10;
	if (n==7)nn=9;
	if (n==8)nn=8;
	if (n==9)nn=1;
	if (n==10)nn=2;
	if (n==11)nn=3;
	if (n==12)nn=4;
	if (n==13)nn=5;
	if (n==14)nn=6;
	if (n==15)nn=7;
	return nn;
}


void printff(int n){
	int nn;
	int oo;
	nn=returnss(n);
	printf(" %d 	|",n);
	if (nn>-1){
		for (oo=0;oo<nn;oo++){
			printf("-");
		}
	}
	printf("> %d\n",returnss(n));
	
}



void printall(){
	int a=0;
	int b=0;
	for(a=0;a<18;a++){
		printff(a);
	}


}
