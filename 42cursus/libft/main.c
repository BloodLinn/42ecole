#include "libft.h"

int main()
{
	int a;

	char *b = (char *) &a;
	
	ft_memset(b, 46, 1);
	ft_memset(b + 1, 251, 1);
	ft_memset(b + 2, 255, 1);
	ft_memset(b + 3, 255, 1);

	printf("%d", a);
}