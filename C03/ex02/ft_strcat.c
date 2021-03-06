/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:33:23 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/09 15:42:54 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *charptr;
	char *charptrsrc;

	charptr = dest;
	charptrsrc = src;
	while (*charptr)
		charptr++;
	while (*charptrsrc)
	{
		*charptr = *charptrsrc;
		charptrsrc++;
		charptr++;
	}
	*charptr = 0;
	return (dest);
}
