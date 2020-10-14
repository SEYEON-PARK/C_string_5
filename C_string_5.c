#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	char a[30] = "안녕하세요. ", b[30] = "Hi~ Hello!";
	printf("%s\n", strncat(a, b, 3));

	return 0;
}
