#include "ft.h"

char	*ft_strcat_head(char *buff, char *buff_temp, int *count)
{
	int	i;
	int	len_buff;
	int	start;

	i = 0;
	len_buff = ft_strlen(buff);
	start = *count;
	while (i < (HEX_SIZE - len_buff) && buff_temp[i + start])
	{
		buff[i + len_buff] = buff_temp[i + start];
		i++;
		*count += 1;
	}
	buff[i + len_buff] = '\0';
	return (buff);
}

char	*ft_strncat_head(char *buff, char *buff_t, int *cnt, unsigned int size)
{
	int				len_buff;
	int				start;
	unsigned int	i;

	i = 0;
	len_buff = ft_strlen(buff);
	start = *cnt;
	while ((i < size) && buff_t[i + start])
	{
		buff[i + len_buff] = buff_t[i + start];
		i++;
		*cnt += 1;
	}
	buff[i + len_buff] = '\0';
	return (buff);
}
