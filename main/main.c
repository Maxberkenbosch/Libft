#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Libft.h"
#include <string.h>

int	main(void)
{
	printf("your function gives: %d \n", ft_isalpha('a'));
	printf("your function gives: %d \n", ft_isalpha('b'));
	printf("your function gives: %d \n", ft_isalpha(' '));
	printf("stdlib gives: %d \n", isalpha('a'));
	printf("stdlib gives: %d \n", isalpha('v'));
	printf("stdlib gives: %d \n\n\n", isalpha(' '));

	printf("your function gives: %d \n", ft_isdigit('a'));
	printf("your function gives: %d \n", ft_isdigit(1));
	printf("your function gives: %d \n", ft_isdigit(' '));
	printf("stdlib gives: %d \n", isdigit('a'));
	printf("stdlib gives: %d \n", isdigit(1));
	printf("stdlib gives: %d \n\n\n", isdigit(' '));

	printf("your function gives: %d \n", ft_isalnum('a'));
	printf("your function gives: %d \n", ft_isalnum(1));
	printf("your function gives: %d \n", ft_isalnum(' '));
	printf("stdlib gives: %d \n", isalnum('a'));
	printf("stdlib gives: %d \n", isalnum(1));
	printf("stdlib gives: %d \n\n\n", isalnum(' '));

	printf("your function gives: %d \n", ft_isascii('a'));
	printf("your function gives: %d \n", ft_isascii(1));
	printf("your function gives: %d \n", ft_isascii(160));
	printf("stdlib gives: %d \n", ft_isascii('a'));
	printf("stdlib gives: %d \n", ft_isascii(1));
	printf("stdlib gives: %d \n\n\n", ft_isascii(160));

	printf("your function gives: %d \n", ft_isprint('a'));
	printf("your function gives: %d \n", ft_isprint(42));
	printf("your function gives: %d \n", ft_isprint(160));
	printf("stdlib gives: %d \n", isprint('a'));
	printf("stdlib gives: %d \n", isprint(42));
	printf("stdlib gives: %d \n\n\n", isprint(160));

	printf("your function gives: %lu \n", ft_strlen("333"));
	printf("your function gives: %lu \n", ft_strlen("4444"));
	printf("your function gives: %lu \n", ft_strlen("55555"));
	printf("stdlib gives: %lu \n", strlen("333"));
	printf("stdlib gives: %lu \n", strlen("4444"));
	printf("stdlib gives: %lu \n\n\n", strlen("55555"));

	char s1[100] = "Hallo hoe is het?";
	printf("your function gives: %s \n", ft_memset(s1, 'A', 5));
	//printf("your function gives: %s \n", ft_memset("hallo hoe is het?", 'x', 0));
	printf("stdlib gives: %s \n\n\n", memset(s1, 'A', 5));
	//printf("stdlib gives: %s \n", memset("hallo hoe is het?", 'x', 0));

	char s2[100] = "Hallo hoe is het?";
	ft_bzero(s2, 5);
	printf("your function gives: %s \n", s2);
	printf("stdlib gives: %s \n\n\n", bzero(s1, 5));

	char s3[100] = "Hallo hoe is het?";
	char s4[10] = "XXXX";
	printf("your function gives: %s \n", ft_memcpy(s3, s4, 4));
	printf("stdlib gives: %s \n\n\n", memcpy(s4, s4, 4));

	char s5[100] = "Hallo hoe is het?";
	char s6[10] = "XXXX";
	printf("your function gives: %s \n", ft_memmove(s5, s6, 4));
	printf("stdlib gives: %s \n\n\n", memmove(s5, s6, 4));

	char s7[100] = "Hallo hoe is het?";
	char s8[10] = "XXXX";
	printf("your function gives: %lu \n", ft_strlcpy(s7, s8, 4));
	printf("stdlib gives: %lu \n\n\n", strlcpy(s7, s8, 4));

	char s9[50] = "Hallo hoe is het?";
	char s10[10] = "XXXX";
	printf("your function gives: %lu \n", ft_strlcat(s9, s10, 25));
	printf("stdlib gives: %lu \n\n\n", strlcat(s9, s10, 25));

	printf("your function gives: %c \n", ft_toupper('a'));
	printf("your function gives: %c \n", ft_toupper('B'));
	printf("your function gives: %c \n", ft_toupper(' '));
	printf("stdlib gives: %c \n", toupper('a'));
	printf("stdlib gives: %c \n", toupper('B'));
	printf("stdlib gives: %c \n\n\n", toupper(' '));

	printf("your function gives: %c \n", ft_tolower('a'));
	printf("your function gives: %c \n", ft_tolower('B'));
	printf("your function gives: %c \n", ft_tolower(' '));
	printf("stdlib gives: %c \n", tolower('a'));
	printf("stdlib gives: %c \n", tolower('B'));
	printf("stdlib gives: %c \n\n\n", tolower(' '));

	char s11[50] = "hoi * hoi";
	printf("Your function gives: %s \n", ft_strchr(s11, 42));
	printf("Your function gives: %s \n", ft_strchr(s11, 88));
	printf("stdlib gives: %s \n", strchr(s11, 42));
	printf("stdlib gives: %s \n\n\n", strchr(s11, 88));

	char s12[50] = "Hallo hoe is het?";
	char s13[50] = "Hallo hoe is het?";
	char s14[50] = "aaa";
	char s15[50] = "bbb";
	printf("Your function gives: %d \n", ft_strncmp(s12, s13, 10));
	printf("Your function gives: %d \n", ft_strncmp(s14, s15, 3));
	printf("stdlib gives: %d \n", strncmp(s12, s13, 10));
	printf("stdlib gives: %d \n\n\n", strncmp(s14, s15, 3));

	char s16[50] = "hoi * hoi";
	printf("Your function gives: %s \n", ft_memchr(s16, '*', 5));
	printf("Your function gives: %s \n", ft_memchr(s16, '*', 3));
	printf("stdlib gives: %s \n", memchr(s16, '*', 5));
	printf("stdlib gives: %s \n\n\n", memchr(s16, '*', 3));

	char s17[50] = "Hallo hoe is het?";
	char s18[50] = "Hallo hoe is het?";
	char s19[50] = "aaa";
	char s20[50] = "bbb";
	printf("Your function gives: %d \n", ft_memcmp(s17, s18, 10));
	printf("Your function gives: %d \n", ft_memcmp(s19, s20, 3));
	printf("stdlib gives: %d \n", memcmp(s17, s18, 10));
	printf("stdlib gives: %d \n\n\n", memcmp(s19, s20, 3));

	char s21[50] = "abcdefg";
	char s22[50] = "cdef";
	char s23[50] = "Hallo hoe is het?";
	char s24[50] = "bbb";
	printf("Your function gives: %s \n", ft_strnstr(s21, s22, 10));
	printf("Your function gives: %s \n", ft_strnstr(s23, s24, 10));
	printf("stdlib gives: %s \n", strnstr(s21, s22, 10));
	printf("stdlib gives: %s \n\n\n", strnstr(s23, s24, 10));

	char s25[50] = "    -12344";
	char s26[50] = "  +12a34";
	char s27[50] = "1234";
	printf("your function gives: %d \n", ft_atoi(s25));
	printf("your function gives: %d \n", ft_atoi(s26));
	printf("your function gives: %d \n", ft_atoi(s27));
	printf("stdlib gives: %d \n", atoi(s25));
	printf("stdlib gives: %d \n", atoi(s26));
	printf("stdlib gives: %d \n", atoi(s27));

	printf("------------------------------------------------------------------\n\n\n");

	printf("your function gives: %s \n", ft_calloc(5, 2));
	printf("stdlib gives: %s \n", calloc(5, 2));

	char s28[50] = "Hallo geitig kroketje!";
	printf("your function gives: %s \n", ft_strdup(s28));
	printf("stdlib gives: %s \n\n\n", strdup(s28));

	char s29[50] = "Hallo geitigg kroketje!";
	printf("your function gives: %s \n\n\n", ft_substr(s29, 6, 6));
	//printf("stdlib gives: %s \n", substr(s29, 6, 6));

	char s30[50] = "12345";
	char s31[50] = "6789";
	printf("your function gives: %s\n\n\n", ft_strjoin(s30, s31));

	char	s32[50] = "cbaWatGeitig!abc";
	char	set[50] = "abc";
	printf("your function gives: %s \n\n\n", ft_strtrim(s32, set));

	// char	zin[100] = "!!Hallo!!hoe!is!het?";
	// char 	split = '!';
	// ft_split(zin, split);


}
// void	ft_free_memory(char **Array)
// {
// 	if(!Array)

// }


// int	ft_char_counter(char const *s, char c)
// {
// 	int	i;
// 	int	counter;

// 	counter = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if(s[i] != c)
// 		{
// 			counter++;
// 		}
// 		i++;
// 	}
// 	return (counter);
// }