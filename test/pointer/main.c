#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *str = "hello";
	int i;
	printf("%c\n", *(str + 1));
	printf("%p %p\n", str++, str );
	printf("%c\n", *(str + 1));
	// i = -1;
	// while (++i< 10)
	// {
	// 	printf("%d\n",i);
	// }
}