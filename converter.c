#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addkey(char *text);
void inputkey();

int main(){
	fprintf(stdout,"#include <stdlib.h>\n");
	fprintf(stdout,"#include <stdio.h>\n");
	fprintf(stdout,"#include <string.h>\n\n\n");
	fprintf(stdout,"	// converter from bash into .c file");
	fprintf(stdout,"\nint main(){\n\n");
	inputkey();
	fprintf(stdout,"	return 0;\n}\n\n");
	return 0;	
}


void addkey(char *text){
	fprintf(stdout,"	system(\"%s\");\n",text);
}




void inputkey(){
	int b=0;
	char s[82];
	char l[82];
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
			addkey(p1);
		}else{
			b=1;
		}
	}
	
}
