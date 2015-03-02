// test_c.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char a[] = {0x11,0x22,0x33,0x44};
	int *p = (int*)a;
	int i;

	printf("%#x\n", ++a[0]);	// ++a[0]
	printf("%#x\n", (*a));		// a[0]
	printf("%#x\n", a);			// &a[0]
	printf("%#x\n", p);			// &a[0]
	printf("%#x\n", *p);		// a
	printf("%#x\n", p[0]);		// a
	printf("%#x\n", p + 1);		// &a[1]
	printf("%#x\n", ((*p) + 1));// a[0] + 1
	printf("-----------------\n");
	for (i = 0; i < 4; i++) {//×
		printf("%#x\n", p[i]);
	}
	printf("-----------------\n");
	char *p2 = a;
	for (i = 0; i < 4; i++) {//○
		printf("%#x\n", p2[i]);
	}
	printf("-----------------\n");

	int *hd = (int*)a + 5;// =&a[0] + (5 * sizeof(int))
	printf("%#x\n", hd);
	printf("%#d\n", hd - p);

	_getch();

	return 0;
}
