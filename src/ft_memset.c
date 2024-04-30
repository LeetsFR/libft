#include "libft.h"

void * ft_memset( void * pointer, int value, size_t count )
{
  size_t i;
  unsigned char *tmp;

  

  if(pointer == NULL)
    return(NULL);

  i = 0;
  tmp = (unsigned char *)pointer;
  while(i < count)
  {
    tmp[i] =(unsigned char) value;
    i++;
  }
  return(pointer);
  
}
