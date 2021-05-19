#include <stdio.h>
char line[2000];
int ans[256];//統計有幾個字母 ex.ans[65]=3表示'A'有3次
int main()
{
	//step01:input:一次1整行，很多一整行
	for(int t=0;gets(line);t++)
	{
		for(int i=0;i<256;i++)ans[i]=0;//清乾淨

		for(int i=0;line[i]!=0;i++)//step04:字串的迴圈
		{
			char c= line[i];//step04:第i個字母
			ans[c]++;//step04:統計到ans[]裡面
		}


		//step02:output:對應印出來
		if(t>0)printf("\n");
		for(int i=0;i<256;i++)//step05:真的印出來
		{
			if(ans[i]>0)printf("%d %d\n",i,ans[i]);
		}
	}
}
