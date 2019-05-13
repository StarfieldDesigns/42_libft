
#include "libft.h"

static void    *ft_memchr(const void *str, int c, size_t len)
{
    unsigned char *s;

    s = (unsigned char *)str;
    while (len--)
    {
        if (*s != (unsigned char)c
            s++;
        else                                        
            return (s);                                               
    }
    return (NULL);                    
}

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
