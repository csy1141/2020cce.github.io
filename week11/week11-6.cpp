#include <stdio.h>
char line[2000];
int ans[256];//�έp���X�Ӧr�� ex.ans[65]=3���'A'��3��
int main()
{
	//step01:input:�@��1���A�ܦh�@���
	for(int t=0;gets(line);t++)
	{
		for(int i=0;i<256;i++)ans[i]=0;//�M���b

		for(int i=0;line[i]!=0;i++)//step04:�r�ꪺ�j��
		{
			char c= line[i];//step04:��i�Ӧr��
			ans[c]++;//step04:�έp��ans[]�̭�
		}


		//step02:output:�����L�X��
		if(t>0)printf("\n");
		for(int i=0;i<256;i++)//step05:�u���L�X��
		{
			if(ans[i]>0)printf("%d %d\n",i,ans[i]);
		}
	}
}
