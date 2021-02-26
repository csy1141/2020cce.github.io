#include <stdio.h>
int main()
{
	int n, m;
	int a,b;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		if(n%i==0&&m%i==0){
			a=n/i;
			b=m/i;
		}
	}
	printf("%d %d\n", a, b);
}


