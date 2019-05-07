
#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t len)
{
   char *d;
   const char *s;

   s = src;
   d = dest;
   while (len--)
       *d++ = *s++;
   return (dest);
}
