/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksegers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:32:37 by ksegers           #+#    #+#             */
/*   Updated: 2025/08/09 13:15:45 by ksegers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);

void	rush01(int x, int y);

void	rush02(int x, int y);

void	rush03(int x, int y);

void	rush04(int x, int y);

/*
 * argc = arg count
 * argv = a list of strings that store the arguments
 *
 * if any of the following are NOT true than we have a good situation and
 * can differentiate between the rushes.
 *
 * argc != 2 ==> for the good condition we need to have 2 arguments
 * argv[1][0] == '\0' ==> for the good condition we can't have that the 2nd arg
 * 			  has length 0
 * argv[1][1] == '\0' ==> for the good condition we can't have that the 2nd arg
 * 			  has length 1
 * argv[1][2] != '\0' ==> for the good condition we must have that the 2nd arg
 * 			  has length 2
 * argv[1][0] != '0' ==> for the good condition we must have that the 2nd arg
 * 			 begins with '0'
 */
int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 10;
	y = 9;
	if (argc != 2 || argv[1][0] == '\0' || argv[1][1] == '\0'
		|| argv[1][2] != '\0' || argv[1][0] != '0')
		rush03(x, y);
	else
	{
		if (argv[1][1] == '0')
			rush00(x, y);
		else if (argv[1][1] == '1')
			rush01(x, y);
		else if (argv[1][1] == '2')
			rush02(x, y);
		else if (argv[1][1] == '4')
			rush04(x, y);
		else
			rush03(x, y);
	}
	return (0);
}
