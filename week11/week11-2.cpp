#include <stdio.h>
#include <stdlib.h>//qsort()
#include <string.h>//strcmp()
char line[2000][80];
char others[80];//�Ψӧ�᭱�����Ū��
int compare(const void *p1,const void *p2)
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;

	int result = strcmp(s1,s2);
	if(result >  0)return  1;
	if(result == 0)return  0;
	if(result <  0)return -1;
}
int main()
{
	int n;//step01:input
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		gets(others);//�Ψӧ�᭱�����Ū��
	}

	qsort(line,n,80,compare);//�Ƨ�

	printf("%s",line[0]);//�}�Y
	int ans=1;//�}�Y
	for(int i=0;i<n-1;i++)//step02:output
	{
		if(strcmp(line[i],line[i+1])==0)//�Y2���ۦP
		{
			ans++;
		}
		else
		{
			printf(" %d\n",ans);//����(�e�@����)
			printf("%s ",line[i+1]);//�}�Y(�U�@��)
			ans=1;
		}
	}
	printf("%d\n",ans);//����
}
