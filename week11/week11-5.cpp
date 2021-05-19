#include <stdio.h>
char line[2000];
int main()
{
	//step01:input:一次1整行，很多一整行
	for(int t=0;gets(line);t++)
	{

		//step02:output:對應印出來
		if(t>0)printf("\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
	}
}
