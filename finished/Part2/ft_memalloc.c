#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*arr;

	arr = (void *)malloc(sizeof(void) * size);
	if (!arr)
		return (NULL);
	((int *)arr)[0] = 0;
	return (arr);
}
