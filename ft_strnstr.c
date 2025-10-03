char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			k = i;
			while (big[k] && little[j] && k < len && big[k] == little[j])
			{
				j++;
				k++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (0);
}

// static int	initialstrsearch(const char *str, char c, int i)
// {
// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 		{
// 			return (i);
// 		}
// 		i++;
// 	}
// 	return (-1);
// }
// static int	compchar(const char *str, char c, int i)
// {
// 	return (str[i] == c);
// }

// char	*ft_strnstr(const char *big, const char *little, unsigned int len)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	k;

// 	if (little[0] == '\0')
// 		return ((char *)big);
// 	i = 0;
// 	while (big[i] && i < len)
// 	{
//         j = 0;
//         if (initialstrsearch(big, little[j], i) >= 0)
//         {
//             i = initialstrsearch(big, little[j], i);
//             k = i;
//             while (big[k] && little[j] && k < len && compchar(big, little[j],k))
//             {
//                 j++;
//                 k++;
//                 if (little[j] == '\0')
//                     return ((char *)&big[i]);
//             }
//         }
// 		i++;
// 	}
// 	return (0);
// }
