#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int t;
	scanf("%d\n\n", &t);

	for(int i=0; i<t; i++){
		int n=0;
		while(gets(line)!=NULL){
			if(strcmp(line, "")==0)break;
			printf("%s\n", line);
		}
		printf("==========\n");
	}
}
