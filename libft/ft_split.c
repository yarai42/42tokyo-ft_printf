/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 07:35:17 by yarai             #+#    #+#             */
/*   Updated: 2022/10/02 13:15:20 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const	*s, char c);
static size_t	split_count(char const	*s, char c);
static bool		ft_ans(char	**ans, char const	*s, char c, size_t	l);
static char		*last_sp(char const	*s, size_t	l, bool	flag);
static char		**ft_all_free(char	**arr);

static char	**ft_all_free(char	**arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
	return (arr);
}

static size_t	split_count(char const	*s, char c)
{
	size_t	split_cnt;
	size_t	i;
	bool	flag;

	flag = false;
	i = 0;
	split_cnt = 0;
	if (!*s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c && flag)
		{
			split_cnt++;
			flag = false;
		}
		else if (s[i] != c)
			flag = true;
		i++;
	}
	if (flag)
		split_cnt++;
	return (split_cnt);
}

static char	*last_sp(char const	*s, size_t	l, bool	flag)
{
	char	*last_sp;

	last_sp = NULL;
	if (flag)
	{
		last_sp = ft_substr(s - l, 0, l);
		if (last_sp == NULL)
			return (NULL);
	}
	return (last_sp);
}

static bool	ft_ans(char	**ans, char const	*s, char c, size_t	l)
{
	size_t	i;
	bool	flag;

	i = 0;
	flag = false;
	while (*s)
	{
		if (s[0] == c && flag)
		{
			ans[i++] = ft_substr(s - l, 0, l);
			if (ans[i - 1] == NULL)
				return (false);
			flag = false;
			l = 0;
		}
		else if (s[0] != c)
		{
			flag = true;
			l++;
		}
		s++;
	}
	ans[i] = last_sp(s, l, flag);
	return (true);
}

char	**ft_split(char const	*s, char c)
{
	char	**ans;
	size_t	split_elemlen;
	bool	null_flag;

	if (!s)
		return (NULL);
	split_elemlen = split_count(s, c);
	ans = (char **)malloc(sizeof(char *) * (split_elemlen + 1));
	if (ans == NULL)
		return (NULL);
	if (split_elemlen == 0)
	{
		ans[0] = NULL;
		return (ans);
	}
	null_flag = ft_ans(&ans[0], s, c, 0);
	if (!null_flag || ans[split_elemlen - 1] == NULL)
		return (ft_all_free(&ans[0]));
	ans[split_elemlen] = NULL;
	return (ans);
}
