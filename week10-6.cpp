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
		qsort(tree, n, 32, compare);

		if(i>0) printf("\n");
		int ans=1;
		printf("%s ", tree[0]);

		for(int j=0; j<n-1; j++){
			if(strcmp(tree[j], tree[j+1])==0){
				ans++;
			}else{
				printf("%.4f\n", 100*ans/(float)n);
				ans=1;
				printf("%s ", tree[j+1]);

			}

		}
		printf("%.4f\n", 100*ans/(float)n);
	}
}
