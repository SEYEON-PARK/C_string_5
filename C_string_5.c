#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	char a[30] = "�ȳ��ϼ���. ", b[30] = "Hi~ Hello!";
	printf("%s\n", strncat(a, b, 3));

	return 0;
}