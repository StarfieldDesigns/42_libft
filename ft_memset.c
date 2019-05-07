
#include <string.h>

void    *ft_memset(void *dest, int val, size_t len)
{
    unsigned char *str;
       
    str = dest;
    while (len--)
    {
        *str = val;
        str++;
    }
    *str = 0;
    return (dest);
}
