/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:22:10 by sekmekci          #+#    #+#             */
/*   Updated: 2023/11/04 19:56:15 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	j;

	j = 1;
	i = -1;
	while (s[++i])
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	if (!s && !ft_strchr(s, c))
		return (NULL);
	j = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (!str)
		return (NULL);
	j = -1;
	i = -1;
	while (s[++i])
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[++j] = ft_substr(s, start, i - start);
		}
	str[++j] = NULL;
	return (str);
}

/*int main()
{
    char **s = ft_split2("elma      elma      elma       elma        ", ' ');
    int i = 0;
    while (s[i])
    {
        printf("%s\n", s[i]);
        i++;
    }
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	s1 = ft_strdup(s);
	s2 = ft_strdup(s);
	if (!s && !ft_strchr(s1, c))
		return (0);
	while (*s1)
		if (ft_strchr(s1++, c))
			i++;
	//printf("%d", i);
	*str = (char **)malloc(sizeof(char *) * i);
	while (*s && *s2 && ft_strchr(s2++, c))
		*str++ = ft_substr(s, , ft_strlen(s) - ft_strlen(s2) - 1);
	return (str);
}

semih ekmekci

int	main(void)
{
	char	*str = { "salih 42 polat \\0"};
	char	**dest = ft_split(str, ' ');
	
	printf("%s", dest[1]);
}

ahm b ahmet
0123456
13 - 7 = 6
s2 - 6;

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = ft_strdup(s);
	s2 = ft_strdup(s);
	if (!s && !ft_strchr(s1, c))
		return (NULL);
	while (*s1)
		if (ft_strchr(s1++, c))
			i++;
	str = (char **)malloc(sizeof(char *) * i);
	while (*s && *s2 && ft_strchr(s2++, c))
		*str++ = ft_substr(s, , ft_strlen(s) - ft_strlen(s2) - 1);
	return (str);
}*/