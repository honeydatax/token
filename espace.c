#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argments[50];

int main(){
	char tokens[82];
	char *p1;
	char *p2;
	int count;
	int b=0;
	int bb=0;
	int n=0;
	int txt;
	char *texts[]={"Text","Number"};
	printf("input token?: ");
	p1=fgets(tokens,80,stdin);
	argments[0]=p1;
	p2=strstr(p1," ");
	count=1;
	if(p2!=NULL){
		p1=p2+1;
		argments[1]=p1;	
		p2[0]=0;
		count++;
		b=0;
		while(b!=1){
				p2=strstr(p1,",");
				if(p2!=NULL){
					p1=p2+1;
					argments[count]=p1;
					p2[0]=0;
					count++;
				}else{
					b=1;
				}
		}
	}
	p2=strstr(p1,"\n");
	if(p2!=NULL)p2[0]=0;
	p2=strstr(p1,"\r");
	if(p2!=NULL)p2[0]=0;
	printf("\ntokens count: %d\n",count);
	for (n=0;n<count;n++){
		p1=argments[n];
		p2=strstr(p1," ");
		if(p2!=NULL){
			b=0;
			p2=p1;
			while(b!=1){
					if (p2[0]==' ')p2=p2+1;
					if(p2[0]!=' '){
						p1=p2;
						argments[n]=p1;
						b=1;
						p2=strstr(p1," ");
						if(p2!=NULL)p2[0]=0;
					}
					if(p2[0]==0)b=1;
			}
	}	}

	
	for (n=0;n<count;n++){
		txt=0;
		if (((argments[n][0] > '0'-1 && argments[n][0] < '9'+1) || argments[n][0]=='+')|| argments[n][0]=='-') txt=1;
		printf("tokens %d: type %s: \"%s\"\n",n,texts[txt],argments[n]);
	}
	return 0;
}










