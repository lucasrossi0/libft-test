#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int	total_len;
	int		i;
	int		j;
	char	*trim;
	int 	s1_len;

	total_len = strlen(s1) - strlen(set);
	if (total_len < 0)
		return (0);
	trim = (char *) malloc(sizeof(char) * total_len);
	if (!trim)
		return (NULL);
	i = 0;
	s1_len = strlen(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (i < s1_len)
		{
			if (s1[i] == set[j])
			{
				i++;
				j++;
			}
			trim[i] = s1[i];
			i++;
			j++;
		}
		i++;
	}
	return (trim);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	if (!dst || !src)
		return (0);
	srcsize = strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*trim;

	first = 0;
	while (strchr(set, s1[first]))
		first++;
	printf("First %d\n", first);
	last = first;
	while (strchr(set, s1[last]))
		last--;
	printf("Last %d\n", last);
	trim = (char *) malloc(sizeof(char) * (last - first));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + first, last - first);
	trim[last - first] = '\0';
	return (trim);
}
*/

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *trim;

    if (!s1 || !set)
        return NULL;

    start = 0;
    while (strchr(set, s1[start]))
        start++;

    printf("start %ld\n", start);
    end = strlen(s1);
    while (strchr(set, s1[end - 1]))
        end--;
    printf("end %ld\n", end);
    trim = (char *)malloc(sizeof(char) * (end - start));
    if (!trim)
        return NULL;

    i = 0;
    while (start < end)
    {
        trim[i] = s1[start];
        i++;
        start++;
    }
    trim[i] = '\0';

    return trim;
}

int main(void)
{
    const char *s1 = "exexexexLucasexeeexee";
    printf("Strlen %ld\n", strlen(s1));
    const char *set = "ex";
    char *res = ft_strtrim(s1, set);
    printf("Teste %s\n", res);
    free(res);
    return 0;
}
