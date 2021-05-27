# 2020cce.github.io
上課程式碼

## week01
### week01-1
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=50*%d+5*%d+1*%d\n", n, n/50, (n%50)/5, n%5);
}
```
### week01-2
```C
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(n%i==0)
		ans++;
	}
	printf("%d\n", ans);
		
}
```
### week01-3
```C
#include <stdio.h>
int main()
{
	int a[10], ans=0;

	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]%3==0) ans++;

	}
	printf("%d\n", ans);

}
```
### week01-4
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>90||n==90) printf("A");
    else if(n<90&&n>80||n==80) printf("B");
    else if(n<80&&n>60||n==60) printf("C");
    else printf("F");

}
```
### week01-5
```C
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




```
## week02

### week02-1
```C
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);


}
```
### week02-2
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    int *p=&n2[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);


}
```

### week02-3
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);
}
```

## week03

### week03-1
```C
#include <stdio.h>
int main()
{
    int a[5]={0, 10, 20, 30, 40};
    int *p= &a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```

### week03-2
```C
#include <stdio.h>
int main()
{
    int a[5]={0, 10, 20, 30, 40};
    for(int i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    int *p= &a[2];
    *p=222;
    for(int i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    p=p+2;
    *p=666;
    for(int i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    p--;
    *p=555;
    for(int i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}
```

### week03-3
```C
#include <stdio.h>
int a[5]={0, 10, 20, 30, 40};
void printfAll(){
    for(int i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    printfAll();

    int *p= &a[2];
    *p=222;
    printfAll();
    printf("¶Ã½X:%d\n", p);

    p=p+2;
    *p=666;
    printfAll();
    printf("¶Ã½X:%d\n", p);

    p--;
    *p=555;
    printfAll();
    printf("¶Ã½X:%d\n", p);


}
```
### week03-4
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int*p=(int*) malloc( sizeof(int)*10);
    return 0;
}
```
## week04
### week04-1
```C
#include <stdio.h>
struct POINT{
    float x, y;
};
int main()
{
    struct POINT a;
}
```
### week04-2
```C
#include <stdio.h>
struct POINT{
    float x, y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n", a.x, a.y);

    return 0;
}
```
### week04-3
```C
#include <stdio.h>
struct POINT{
    float x, y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n", a.x, a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n", a.x, a.y);

    return 0;
}
```
### week04-4
```C
#include <stdio.h>
struct DATA{
    int x, y;
}a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0; i<3; i++){
        printf("a[%d]:%d %d\n", i, a[i].x, a[i].y );
    }
    printf("b: %d %d\n", b.x, b.y);

    struct DATA c;
    printf("c: %d %d¹³¶Ã½X\n", c.x, c.y);

    c=b;
    printf("c: %d %d\n", c.x, c.y);

}
```
### week04-5
```C
#include <stdio.h>
struct POINT{
    float x, y, z;
};
struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
    struct POINT*p = &point[0];
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);


    return 0;
}
```
## week05
### week05-1
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

}
```
### week05-2
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority";
    printf("%s\n", line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("²{¦b¦L¥X¨Óªºline4: ==%s==\n", line4);

}
```
### week05-3
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0; i<5; i++){
        printf("%s\n", line[i]);
    }

}
```
### week05-4
```C
#include <stdio.h>
int main()
{
        printf("­È:%d", '\0');

}
```
### week05-5
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line, line2)>0){
        printf("¥ªÃä¤j\n");
    }else{
        printf("¥kÃä¤j\n");
    }

}
```
## week07
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];

int compare(const void*p1, const void*p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	return strcmp (s1, s2);
}

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%s", line[i]);
	}

	qsort(line, n, 10, compare);

	for(int i=0; i<n; i++){
		printf("%s\n", line[i]);
	}
}
```
## week10
### week10-1
```C
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
```
### week10-2
```C
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
			n++;
		}
		printf("¦³´X´Ê¾ð? %d\n", n);
		printf("=============\n");
	}
}
```
### week10-3
```C
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];
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
		printf("=============\n");

		for(int j=0; j<n; j++){
			printf("%s\n", tree[j]);
		}
	}
}
```
### week10-4
```C
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
```
### week10-5
```C
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
		int ans=1;
		printf("%s ", tree[0]);

		for(int j=0; j<n; j++){
			if(strcmp(tree[j], tree[j+1])==0){
				ans++;
			}else{
				printf("%d\n", ans);
				ans=1;
				printf("%s ", tree[j+1]);

			}

		}
	}
}
```
### week10-6
```C
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
```
## week11
### week11-1
```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1,const void *p2)
{
    int d1=*(int*)p1;
    int d2=*(int*)p2;
    if(d1 >  d2)return 1;
    if(d1 == d2)return 0;
    if(d1 <  d2)return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
```
### week11-2
```C
#include <stdio.h>
#include <stdlib.h>//qsort()
#include <string.h>//strcmp()
char line[2000][80];
char others[80];//用來把後面的資料讀掉
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
		gets(others);//用來把後面的資料讀掉
	}

	qsort(line,n,80,compare);//排序

	printf("%s",line[0]);//開頭
	int ans=1;//開頭
	for(int i=0;i<n-1;i++)//step02:output
	{
		if(strcmp(line[i],line[i+1])==0)//若2筆相同
		{
			ans++;
		}
		else
		{
			printf(" %d\n",ans);//收尾(前一筆的)
			printf("%s ",line[i+1]);//開頭(下一筆)
			ans=1;
		}
	}
	printf("%d\n",ans);//收尾
}
```
### week11-3
```C
#include <stdio.h>
struct data
{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
### week11-4
```C
#include <stdio.h>
typedef struct data
{
    int ans;
    char c;
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
### week11-5
```C
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
```
### week11-6
```C
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

```
## week12
### week12-1
```C
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0; gets(line); t++){
        int ans[256]={};

        for(int i=0; line[i]!=0; i++){
            char c=line[i];
            ans[c]++;
        }

        if(t>0) printf("\n");

        for(int i=0; i<256; i++){
             if(ans[i]>0) printf("%d %d\n", i, ans[i]);
        }
    }

}
```
### week12-2
```C
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0; gets(line); t++){
        int ans[256]={};
        char c[256]={};
        for(int i=0; i<256; i++) c[i]=i;

        for(int i=0; line[i]!=0; i++){
            char c=line[i];
            ans[c]++;
        }

        for(int i=0; i<256; i++){
        	for(int j=i+1; j<256; j++){
        		if(ans[i]>ans[j]){
        			int temp=ans[i];
        			ans[i]=ans[j];
        			ans[j]=temp;
        			char t=c[i];
        			c[i]=c[j];
        			c[j]=t;
        		}
        	}

        }
        if(t>0) printf("\n");
        for(int i=0; i<256; i++){
        	if(ans[i]>0) printf("%d %d\n", c[i], ans[i]);
        }
    }

}
```
### week12-3
```C
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0; gets(line); t++){
        int ans[256]={};
        char c[256]={};
        for(int i=0; i<256; i++) c[i]=i;

        for(int i=0; line[i]!=0; i++){
            char c=line[i];
            ans[c]++;
        }

        for(int i=0; i<256; i++){
        	for(int j=i+1; j<256; j++){
        		if(ans[i]>ans[j]){
        			int temp=ans[i];
        			ans[i]=ans[j];
        			ans[j]=temp;
        			char t=c[i];
        			c[i]=c[j];
        			c[j]=t;
        		}
        		if(ans[i]==ans[j]&&c[i]<c[j]){
        			int temp=ans[i];
        			ans[i]=ans[j];
        			ans[j]=temp;
        			char t=c[i];
        			c[i]=c[j];
        			c[j]=t;
        		}
        	}

        }
        if(t>0) printf("\n");
        for(int i=0; i<256; i++){
        	if(ans[i]>0) printf("%d %d\n", c[i], ans[i]);
        }
    }

}
```
### week12-4
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d", &T);
	for(int t=0; t<T; t++){
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d", &a[i]);
		}
		int ans=0;

		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```
### week12-5
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d", &T);
	for(int t=0; t<T; t++){
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d", &a[i]);
		}
		int ans=0;
		for(int k=0; k<N-1; k++){
			for(int i=0; i<N-1; i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}

		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```
### week12-6
```C
#include <stdio.h>
int a[10000];
int main()
{
	int N, M;
	while(scanf("%d %d", &N, &M)==2){
		for(int i=0; i<N; i++){
			scanf("%d", &a[i]);
		}
		printf("%d %d\n", N, M);
		for(int i=0; i<N; i++){
			printf("%d\n", a[i]);
		}
	}

}
```
### week13-1
```C

```


