
#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
    void *str;

    str = ft_memchr(src, c, len);
    if (str == NULL)
    {
        ft_memcpy(dest, src, len);
        return (NULL);
    }
    ft_memcpy(dest, src, (str - src + 1));
    return (dest);
}
