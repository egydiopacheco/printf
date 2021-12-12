/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:35:39 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/11 18:37:55 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	int		j;
	int		size;

	size = (int)ft_strlen(s) + 1;
	j = -1;
	s_cpy = (char *)malloc((unsigned int)size * sizeof(char));
	if (!s_cpy)
		return (NULL);
	while (*(s + ++j))
		*(s_cpy + j) = *(s + j);
	*(s_cpy + j) = '\0';
	return (s_cpy);
}
