/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 11:52:09 by jkeum             #+#    #+#             */
/*   Updated: 2020/10/05 17:58:50 by jkeum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
	}
	if (size < dst_len)
		return (size + ft_strlen(src));
	else
		return (ft_strlen(src) + dst_len);
}
