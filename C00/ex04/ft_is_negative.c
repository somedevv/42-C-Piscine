/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:31:03 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/28 10:57:29 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;
	char b;

	a = 'N';
	b = 'P';

	if (n >= 0)
	{
		write(1, &b, 1);
	}
	if (n < 0)
	{
		write(1, &a, 1);
	}
}