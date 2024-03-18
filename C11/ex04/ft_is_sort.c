/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:20 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:04:26 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	int_cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[10] = {1, 2, 3, 7, 5, 6, 7, 8, 9, 9};
	int	length = 10;
	int	output;

	output = ft_is_sort(tab, length, &int_cmp);
	printf("Result is: %d\n", output);
	return (0);
}*/
