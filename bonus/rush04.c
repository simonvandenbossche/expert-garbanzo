/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksegers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:37:44 by ksegers           #+#    #+#             */
/*   Updated: 2025/08/09 13:44:17 by ksegers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line04(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	center_lines04(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('B');
		else if (i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	last_line04(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush04(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		if (j == 0)
			first_line04(x);
		else if (j == y - 1)
			last_line04(x);
		else
			center_lines04(x);
		ft_putchar('\n');
		j++;
	}
}
