#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫
int main(void)
{
	int x;
	printf("請輸入年份:");
	scanf("%d", &x);
	if ((x % 4 == 0 and x % 100 != 0) or (x % 400 == 0 and x % 3200 != 0))
	printf("閏年");
	else
	printf("平年");

	system("pause");
	return 0;
}