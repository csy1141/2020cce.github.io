#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1, const void*p2){
	return strcmp((char*)p1, (char*)p2);
}
int main()
{
	int t;
	scanf("%d\n\n", &t);

	for(int i=0; i<t; i++){
		int n=0;
		while(gets(line)!=NULL){
			if(strcmp(line, "")==0) break;
			strcpy(tree[n], line);

			n++;
		}
		printf("¦³´X´Ê¾ð? %d\n", n);

		qsort(tree, n, 32, compare);

		for(int j=0; j<n; j++){
			printf("%s\n", tree[j]);
		}
		printf("=============\n");
	}
}
