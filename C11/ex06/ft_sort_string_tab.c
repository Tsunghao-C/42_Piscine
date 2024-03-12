#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap_pointer(char **a1, char **a2)
{
	char	*temp;

	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 1;
		while (tab[i + j])
		{
			if (ft_strcmp(tab[i], tab[i + j]) > 0)
				ft_swap_pointer(&tab[i], &tab[i + j]);
			j++;
		}
		i++;
	}
}
/*
char    **ft_split(char *str, char *charset);
int     ft_arr_len(char **arr);

int	main(void)
{
	char	*str = "This is a simple test. If it works, it works!";
	char	*charset = " ,!";
	char	**tab;
	int		arr_len;

	tab = ft_split(str, charset);
	arr_len = ft_arr_len(tab);
	printf("==> Before sort string <==\n");
	for (int i = 0; i < arr_len; i++)
		printf("Split str %d is: %s\n", i, tab[i]); 
	ft_sort_string_tab(tab);
	printf("==> After sort string <==\n");
	for (int j = 0; j < arr_len; j++)
		printf("Split str %d is: %s\n", j, tab[j]);
	//free mem
	for (int k = 0; k < arr_len; k++)
		free(tab[k]);
	free(tab);
	return (0);
}*/
/*
value	| abs | cat | sad | eat | bal |
pointer	| 0x1 | 0x2 | 0x3 | 0x4 | 0x5 |
tab[i] =  *(tab + i) = add of first character
&tab[i] = the address of mem that saves tab[i]
*/
