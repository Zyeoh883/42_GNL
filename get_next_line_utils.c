/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyeoh <zyeoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:14 by zyeoh             #+#    #+#             */
/*   Updated: 2023/11/13 19:14:29 by zyeoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		n;
	int		index;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	n = 0;
	index = 0;
	while (s1[n])
		str[index++] = s1[n++];
	n = 0;
	while (s2[n])
		str[index++] = s2[n++];
	str[index] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*str;

	if (!s)
		return (0);
	n = -1;
	while (s[start + ++n] && (size_t)n < len)
		;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	n = -1;
	while ((size_t)++n < len && s[n + start]
		&& start <= (unsigned int)ft_strlen(s) + 1)
		str[n] = s[n + start];
	str[n] = '\0';
	return (str);
}
