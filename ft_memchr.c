
#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t len)
{
    unsigned char *s;

    s = (unsigned char *)str;
    while (len--)
    {
        if (*s != (unsigned char)c)
            s++;
        else
            return (s);                                    
    }
    return (NULL);                    
}
