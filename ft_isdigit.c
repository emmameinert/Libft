/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:53:55 by emeinert          #+#    #+#             */
/*   Updated: 2022/10/31 11:55:26 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	answer;

	answer = 0;
	if (c >= 48 && c <= 57)
		answer = 1;
	else
		answer = 0;
	return (answer);
}