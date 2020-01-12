#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	for (i=0;i<66;i++){
		printf("\n");
	}
	system("curl 'https://raw.githubusercontent.com/honeydatax/token/master/sample.c' > cclear.c");
	system("gcc -o cclear cclear.c");
	system("sudo cp cclear /usr/bin");
	return 0;
}


