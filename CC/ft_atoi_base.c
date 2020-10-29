#include <stdio.h>

int base_len_(char* base)
{
	int len;
	int j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

int check(char* str, char* base)
{
	int i;
	int j;
	int space;

	space = 0;
	while (str[space] != '\0' && (str[space] == ' ' || str[space] == '\t' ||
		str[space] == '\r' || str[space] == '\n' || str[space] == '\v' ||
		str[space] == '\f'))
		space++;
	i = space;
	while (str[i])
	{
		j = 0;
		while (base[j] && (str[i] != base[j] ||
			(str[i] == '-' || str[i] == '+')))
			j++;
		if (str[i] != base[j] && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int nb_val(char c, char* base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int ft_atoi_base(char* str, char* base)
{
	int i;
	int s;
	int result;
	int no;
	int blen;

	if (!(blen = base_len_(base)) || !check(str, base))
		return (0);
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || str[s] == '\t' || str[s] == '\r'
		|| str[s] == '\n' || str[s] == '\v' || str[s] == '\f'))
		s++;
	i = s - 1;
	result = 0;
	no = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s) ||
		(str[i] != '-' && str[i] != '+')))
	{
		if (str[i] == '-')
			no = -1;
		else if (str[i] != '+')
			result = (result * blen) + nb_val(str[i], base);
	}
	return (result * no);
}

int main() {
	printf("%d", ft_atoi_base("10011", "01"));
}