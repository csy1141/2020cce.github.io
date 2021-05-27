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
