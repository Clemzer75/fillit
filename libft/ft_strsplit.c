/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:15:57 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/14 12:29:54 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define SPACES str[i] == c && str[i] != '\0'

#define WORDS str[i] != c && str[i] != '\0'

static int		word_count(char const *str, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (SPACES)
			i++;
		if (WORDS)
		{
			word++;
			while (WORDS)
				i++;
		}
		while (SPACES)
			i++;
	}
	return (word);
}

static void		letter_count(char **split, char const *str, char c)
{
	int letter;
	int word;
	int i;

	i = 0;
	letter = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (SPACES)
			i++;
		while (WORDS)
		{
			letter++;
			i++;
		}
		split[word] = (char *)malloc(sizeof(char) * (letter + 1));
		while (SPACES)
			i++;
		letter = 0;
		word++;
	}
}

static void		ft_tab_filling(char **split, char const *str, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (split[i])
	{
		while (str[k] == c && str[k] != '\0')
			k++;
		while (str[k] != c && str[k] != '\0')
		{
			split[i][j] = str[k];
			j++;
			k++;
		}
		split[i][j] = '\0';
		i++;
		j = 0;
	}
	split[i] = 0;
}

char			**ft_strsplit(char const *str, char c)
{
	char	**split;
	int		word;

	if (!str)
		return (0);
	word = word_count(str, c);
	if (!(split = (char **)malloc(sizeof(char *) * (word + 1))))
		return (0);
	split[word] = 0;
	if (word == 0)
	{
		split[0] = 0;
		return (split);
	}
	letter_count(split, str, c);
	ft_tab_filling(split, str, c);
	return (split);
}
