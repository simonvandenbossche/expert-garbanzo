/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksegers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:37:44 by ksegers           #+#    #+#             */
/*   Updated: 2025/08/09 13:42:26 by ksegers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line00(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('o');
		else if (i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	center_lines00(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('|');
		else if (i == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	last_line00(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('o');
		else if (i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	rush00(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		if (j == 0)
			first_line00(x);
		else if (j == y - 1)
			last_line00(x);
		else
			center_lines00(x);
		ft_putchar('\n');
		j++;
	}
}
